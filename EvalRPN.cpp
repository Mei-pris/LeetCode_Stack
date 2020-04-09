#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>num;
        for (unsigned int i = 0; i < tokens.size(); ++i) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                num.push(atoi(tokens[i].c_str()));
            }
            else {
                int data1 = num.top();
                num.pop();
                int data2 = num.top();
                num.pop();
                if (tokens[i] == "+") num.push(data2 + data1);
                if (tokens[i] == "-") num.push(data2 - data1);
                if (tokens[i] == "*") num.push(data2 * data1);
                if (tokens[i] == "/") num.push(data2 / data1);
            }
        }
        return num.top();

    }
};

int main() {
    vector<string> c{ "4", "13", "5", "/", "+" };
    Solution mysolution;
    cout<< mysolution.evalRPN(c)<<endl;



}