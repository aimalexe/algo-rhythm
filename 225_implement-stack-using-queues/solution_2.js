class MyStack {
    constructor() {
        this.queue = [];
    }

    /** Push element x onto stack. */
    push(x) {
        this.queue.push(x);
        let size = this.queue.length;
        // Rotate the queue to move the new element to the front
        while (size > 1) {
            this.queue.push(this.queue.shift());
            size--;
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    pop() {
        return this.queue.shift();
    }

    /** Get the top element. */
    top() {
        return this.queue[0];
    }

    /** Returns whether the stack is empty. */
    empty() {
        return this.queue.length === 0;
    }
}

// Test cases
const myStack = new MyStack();
myStack.push(1);
myStack.push(2);
console.log(myStack.top()); // Output: 2
console.log(myStack.pop()); // Output: 2
console.log(myStack.empty()); // Output: false
