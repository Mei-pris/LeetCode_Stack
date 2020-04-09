#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>charBUF;
        if (s.size() == 0) return true;
        for (unsigned int i = 0; i < s.size(); ++i) {
            char a = s[i];
            if (a == '(' || a == '[' || a == '{') charBUF.push(a);
            else {

                if (charBUF.empty()) return false;
                if ((a == ')') && (charBUF.top() != '(')) return false;
                if ((a == ']') && (charBUF.top() != '[')) return false;
                if ((a == '}') && (charBUF.top() != '{')) return false;
                charBUF.pop();
            }
        }
        return charBUF.empty();
    }
};

int main() {
    string str{"[{]}" };
    Solution mysolution;
    cout << mysolution.isValid(str) << endl;
    return 0;
}