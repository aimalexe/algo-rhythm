#include <stack>
#include <iostream>
#include <stdexcept>

using namespace std;

class MyQueue {
private:
    stack<int> inputStack;
    stack<int> outputStack;

    // Transfers elements from inputStack to outputStack
    void transfer() {
        while (!inputStack.empty()) {
            outputStack.push(inputStack.top());
            inputStack.pop();
        }
    }

public:
    /** Initialize your data structure here. */
    MyQueue() {}

    /** Push element x to the back of queue. */
    void push(int x) {
        inputStack.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (outputStack.empty()) {
            transfer();
        }
        if (outputStack.empty()) {
            throw out_of_range("Queue is empty");
        }
        int front = outputStack.top();
        outputStack.pop();
        return front;
    }

    /** Get the front element. */
    int peek() {
        if (outputStack.empty()) {
            transfer();
        }
        if (outputStack.empty()) {
            throw out_of_range("Queue is empty");
        }
        return outputStack.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};

// Test cases to validate the solution
void testMyQueue() {
    MyQueue myQueue;
    myQueue.push(1);
    myQueue.push(2);
    cout << "Peek: " << myQueue.peek() << endl; // return 1
    cout << "Pop: " << myQueue.pop() << endl; // return 1
    cout << "Is Empty: " << (myQueue.empty() ? "true" : "false") << endl; // return false
}

int main() {
    testMyQueue();
    return 0;
}
