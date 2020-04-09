#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

class MinStack {
private:
    stack<int>data;
    int min;
public:
    /** initialize your data structure here. */
    MinStack() {
        min = INT_MAX;
    }

    void push(int x) {
        if (x <= min) {
            data.push(min);
            min = x;
        }
        data.push(x);
    }

    void pop() {
        if (data.top() == min) {
            data.pop();
            min = data.top();
        }
        data.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return min;
    }
};

int main() {
    int ans = 0;
    MinStack minStack;
    minStack.push(2);
    minStack.push(0);
    minStack.push(-1);
    ans=minStack.getMin();  
    cout << ans << endl;
    minStack.pop();
    ans=minStack.top(); 
    cout << ans << endl;
    ans=minStack.getMin();
    cout << ans << endl;
}

