#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int n = nums.size();
        vector<unordered_map<int, int>> dp(n + 1);
        dp[0][0] = 1;
        for (int i = 0; i < n; ++i) {
            for (auto& a : dp[i]) {
                int sum = a.first, cnt = a.second;
                dp[i + 1][sum + nums[i]] += cnt;
                dp[i + 1][sum - nums[i]] += cnt;
            }
        }
        return dp[n][S];
    }
};

int main() {
    Solution mysolution;
    vector<int>a = { 1,1,1,1,1 }; int b = 3; int c = 0;
    c = mysolution.findTargetSumWays(a, b);
    cout << c << endl;
}