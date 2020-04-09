#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class MyQueue {
private:
    stack<int>ss;
public:
    /** Initialize your data structure here. */
    MyQueue() {


    }

    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int>bb;
        while (!ss.empty()) {
            bb.push(ss.top());
            ss.pop();
        }
        ss.push(x);
        while (!bb.empty()) {
            ss.push(bb.top());
            bb.pop();
        }

    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int data = ss.top();
        ss.pop();
        return data;
    }

    /** Get the front element. */
    int peek() {
        return ss.top();

    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return ss.empty();

    }
};

/*class MyStack {
private:
    queue<int>q;
public:
    MyStack() {

    }

    void push(int x) {
        q.push(x);
    }

    int pop() {
        queue<int>temp;
        while (q.size() != 1) {
            temp.push(q.front());
            q.pop();
        }
        int data = q.front();
        q.pop();
        while (!temp.empty()) {
            q.push(temp.front());
            temp.pop();
        }
        return data;



    }

    int top() {
        return q.back();

    }

    bool empty() {
        return q.empty();

    }
};*/

int main() {
    return 0;
}