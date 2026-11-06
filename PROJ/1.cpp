#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string decodeServerName(const string &raw_signal)
{
    string clean_signal{};
    for (char c : raw_signal)
    {
        c = static_cast<unsigned char>(c);
        if (isalnum(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' &&
            c != 'u' /* && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' */)
        {
            clean_signal.push_back(c);
        }
    }
    return clean_signal;
}

vector<int> extractValidPings(const vector<int> &raw_pings)
{
    vector<int> clean_pings{};
    for (size_t i{}; i < raw_pings.size(); i++)
    {
        if (raw_pings.at(i) == -999)
        {
            break;
        }
        else if (raw_pings.at(i) > 0)
        {
            clean_pings.push_back(raw_pings.at(i));
        }
    }
    return clean_pings;
}

void analyzeTelemetry(const vector<int> &clean_pings, double &avg_out, int &max_ping_out,
                      int &longest_stable_streak_out)
{

    if (clean_pings.empty())
    {
        avg_out = 0.0;
        max_ping_out = 0;
        longest_stable_streak_out = 0;

        return;
    }

    avg_out = 0;
    for (auto n : clean_pings)
    {
        avg_out += n;
    }
    avg_out /= clean_pings.size();

    max_ping_out = clean_pings.at(0);
    for (size_t i{1}; i < clean_pings.size(); i++)
    {
        if (max_ping_out < clean_pings.at(i))
        {
            max_ping_out = clean_pings.at(i);
        }
    }

    int current_max{0};
    longest_stable_streak_out = 0;
    for (size_t i{}; i < clean_pings.size(); i++)
    {

        if (clean_pings.at(i) <= 50)
        {
            current_max++;
        }
        else
        {
            current_max = 0;
        }

        if (longest_stable_streak_out < current_max)
        {
            longest_stable_streak_out = current_max;
        }
    }

    return;
}

int main()
{
    string raw_signal{"##P!u@N_e#01$"};
    cout << decodeServerName(raw_signal) << '\n';

    vector<int> raw_pings{30, 45, -10, 25, 80, 40, 35, 20, 15, -999, 10};
    vector<int> clean_pings = extractValidPings(raw_pings);

    for (auto n : clean_pings)
    {
        cout << n << ' ';
    }
    cout << '\n';

    double avg_out{};
    int max_ping_out{};
    int longest_stable_streak_out{};

    analyzeTelemetry(clean_pings, avg_out, max_ping_out, longest_stable_streak_out);

    cout << avg_out << ' ' << max_ping_out << ' ' << longest_stable_streak_out << '\n';

    return 0;
}