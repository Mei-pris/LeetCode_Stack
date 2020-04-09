#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int res = 0;
        findtarget(nums,S,0,res);
        return res;
    }

    void findtarget(vector<int>& num, int sum, int start, int &ans) {
        if (start >= num.size()) {
            if (sum == 0) ++ans;
            return;
        }    
            findtarget(num, sum - num[start], start + 1, ans);
            findtarget(num, sum + num[start], start + 1, ans);
    }
};

int main() {
    Solution mysolution;
    vector<int>a = { 1,1,1,1,1 }; int b = 3; int c = 0;
    c = mysolution.findTargetSumWays(a,b);
    cout << c << endl;
}