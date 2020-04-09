#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        string ss{""};
        stack<string>temp;
        stack<int>cnt;
        int num = 0;
        for (unsigned int i = 0; i < s.size(); ++i) {
            if ((s[i] >= '0') && (s[i]<= '9')) {
                num = num * 10 + s[i] - '0';
            }
            else if (s[i] == '[') {
                cnt.push(num);
                num = 0;
                temp.push(ss);
                ss.clear();
            }
            else if (s[i] == ']') {
                int n = cnt.top();
                cnt.pop();              
                for (unsigned int k = 0; k < n; ++k) {                  
                    temp.top() = temp.top()+ ss;
                }
                ss = temp.top();
                temp.pop();
            }
            else ss = ss + s[i];
        }
        return ss;
    }
};

int main() {
    Solution mysolution;
    string  s{ "2[abc]3[cd]ef" };
    cout << mysolution.decodeString(s) << endl;

}
