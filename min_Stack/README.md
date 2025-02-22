    💡 Min Stack 💡

**💡 Problem Description**

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack`` class:

- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element val onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.

You must implement a solution with `O(1)` time complexity for each function.

Example 1:

    Input
    ["MinStack","push","push","push","getMin","pop","top","getMin"]
    [[],[-2],[0],[-3],[],[],[],[]]

    Output
    [null,null,null,null,-3,null,0,-2]

    Explanation
    MinStack minStack = new MinStack();
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin(); // return -3
    minStack.pop();
    minStack.top();    // return 0
    minStack.getMin(); // return -2

Constraints:

- `-231 <= val <= 231 - 1`
- Methods `pop`, `top` and `getMin` operations will always be called on `non-empty` stacks.
- At most `3 * 104` calls will be made to push, `pop`, `top`, and `getMin`.

**💡 Approach**

To solve this problem in O(1) time complexity, we use two stacks:

- Main stack (stk) → Stores all elements.
- Auxiliary stack (minStk) → Stores only the minimum values encountered so far.


**Why Two Stacks**

- When pushing a new element, we also push it onto `minStk` only if it is smaller than or equal to the current minimum.

- When popping an element, if the `top` of stk is equal to the top of minStk, we `pop` from both stacks to maintain correctness.

- The `getMin()` function always returns the top of minStk in O(1) time.