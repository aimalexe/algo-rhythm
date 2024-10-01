class MyQueue {
    constructor() {
        this.inputStack = [];
        this.outputStack = [];
    }

    /** Push element x to the back of queue. */
    push(x) {
        this.inputStack.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    pop() {
        if (this.outputStack.length === 0) {
            this.transfer();
        }
        if (this.outputStack.length === 0) {
            throw new Error("Queue is empty");
        }
        return this.outputStack.pop();
    }

    /** Get the front element. */
    peek() {
        if (this.outputStack.length === 0) {
            this.transfer();
        }
        if (this.outputStack.length === 0) {
            throw new Error("Queue is empty");
        }
        return this.outputStack[this.outputStack.length - 1];
    }

    /** Returns whether the queue is empty. */
    empty() {
        return this.inputStack.length === 0 && this.outputStack.length === 0;
    }

    // Transfers elements from inputStack to outputStack
    transfer() {
        while (this.inputStack.length > 0) {
            this.outputStack.push(this.inputStack.pop());
        }
    }
}

// Test cases to validate the solution
const testCases = [
    { actions: ["push", "push", "peek", "pop", "empty"], values: [[1], [2], [], [], []], expected: [null, null, 1, 1, false] },
];

testCases.forEach(({ actions, values, expected }, index) => {
    const myQueue = new MyQueue();
    const results = [];
    
    actions.forEach((action, idx) => {
        if (action === "push") {
            myQueue.push(...values[idx]);
            results.push(null);
        } else if (action === "pop") {
            results.push(myQueue.pop());
        } else if (action === "peek") {
            results.push(myQueue.peek());
        } else if (action === "empty") {
            results.push(myQueue.empty());
        }
    });

    const isSuccess = JSON.stringify(results) === JSON.stringify(expected);
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed" : "Failed"}`);
    console.log(`  Expected: ${JSON.stringify(expected)}, Got: ${JSON.stringify(results)}`);
});
