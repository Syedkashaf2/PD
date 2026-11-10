#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class TrafficAnalyzer
{
  private:
    vector<int> packets;
    vector<long long> prefix;

  public:
    // 1. Constructor:
    //    Saves 'data' into 'packets', and builds the 1-indexed 'prefix' vector
    //    of size data.size() + 1 (just like your RangeAdder class in Module 8.1!).

    TrafficAnalyzer(const vector<int> &data) : packets(data), prefix(data.size() + 1, 0)
    {
        // int sum{};
        //  ANOTHER APPROACH
        //   prefix.push_back(sum);
        //   for (auto &n : data)
        //   {
        //       sum += n;
        //       prefix.push_back(sum);
        //   }

        for (size_t i{}; i < packets.size(); i++)
        {
            prefix.at(i + 1) = prefix.at(i) + data.at(i);
        }
    }

    // 2. Prefix Sum Range Query (O(1) time — Stage 8.1):
    //    Returns the total traffic between second 'left' and second 'right' inclusive.
    long long getRangeTraffic(int left, int right) const
    {
        return prefix.at(right + 1) - prefix.at(left);
    }

    // 3. Fixed-Size Sliding Window Peak Finder (O(N) time — Stage 8.3):
    //    Returns the MAXIMUM sum of any 'k' consecutive seconds of traffic.
    //    (If packets.size() < k, return 0).
    long long getMaxWindowTraffic(int k) const
    {
        if (packets.size() < k)
        {
            return 0;
        }

        long long currentSum{};

        for (int i{}; i < k; i++)
        {
            currentSum += packets.at(i);
        }
        long long maxSum = currentSum;

        for (size_t i{static_cast<size_t>(k)}; i < packets.size(); i++)
        {
            currentSum += packets.at(i) - packets.at(i - k);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }

    // 4. Hash Map Frequency Mode Finder (O(N) time — Stage 6.2):
    //    Uses an unordered_map<int, int> to find and return the packet size
    //    that appeared MOST frequently in 'packets'. (If packets is empty, return 0).

    int getMostCommonPacketSize() const
    {
        if (packets.empty())
        {
            return 0;
        }

        unordered_map<int, int> freq;

        for (const auto &n : packets)
        {
            freq[n]++;
        }

        int num{}, occ{};

        for (auto &n : freq)
        {
            if (occ < n.second)
            {
                occ = n.second;
                num = n.first;
            }
        }
        return num;
    }
};

int main()
{
    vector<int> data = {10, 20, 10, 40, 30, 10, 50};
    TrafficAnalyzer net(data);

    cout << net.getRangeTraffic(1, 4) << '\n';
    cout << net.getMaxWindowTraffic(3) << '\n';
    cout << net.getMostCommonPacketSize() << '\n';
}