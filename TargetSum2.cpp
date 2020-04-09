#include <iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        unordered_map<int, int> dp;
        dp[0] = 1;
        for (int i = 0; i < n; ++i) {
            unordered_map<int, int> t;
            for (auto& a : dp) {
                int sum = a.first, cnt = a.second;
                t[sum + nums[i]] += cnt;
                t[sum - nums[i]] += cnt;
            }
            dp = t;
        }
        return dp[S];
    }
};

int main() {
    Solution mysolution;
    vector<int>a = { 1,1,1,1,1 }; int b = 3; int c = 0;
    c = mysolution.findTargetSumWays(a, b);
    cout << c << endl;
}