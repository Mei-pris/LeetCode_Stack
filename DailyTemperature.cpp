#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
   vector<int> dailyTemperatures(vector<int>& T) {
        stack<int>Tem;
        vector<int>daynum(T.size(), 0);
        for (unsigned int i = 0; i < T.size(); ++i)
        {
            while ((!Tem.empty()) && (T[i] > T[Tem.top()])) {
                int pos = Tem.top();
                daynum[pos] = i - pos;
                Tem.pop();
            }
            Tem.push(i);
        }
        return daynum;

    }
};

int main() {
    vector<int>aa{73,74,75,71,79,72,76,73,86};
    vector<int>ans;
    Solution mysolution;
    ans = mysolution.dailyTemperatures(aa);
    for (int p : ans) {
        cout << p<< ' ';
    }
    cout << endl;
    return 0;
}