#include <queue>
#include <iostream>
using namespace std;

class MyStack {
private:
    queue<int> q1, q2;

public:
    /** Initialize your data structure here. */
    MyStack() {}

    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2); // Swap q1 and q2, q1 will now hold all elements in stack order
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int topElement = q1.front();
        q1.pop();
        return topElement;
    }

    /** Get the top element. */
    int top() {
        return q1.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    cout << myStack.top() << endl; // Returns 2
    cout << myStack.pop() << endl; // Returns 2
    cout << (myStack.empty() ? "true" : "false") << endl; // Returns false
    return 0;
}
