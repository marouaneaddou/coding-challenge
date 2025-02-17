**Valid Parentheses**

**Problem Description**

Given a string s containing just the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.

- Open brackets must be closed in the correct order.

- Every close bracket has a corresponding open bracket of the same type.

Example 1:

    Input: s = "()"

    Output: true

Example 2:

    Input: s = "()[]{}"

    Output: true

Example 3:

    Input: s = "(]"

    Output: false

Example 4:

    Input: s = "([])"

    Output: true

Constraints:

    1 <= s.length <= 104
    s consists of parentheses only '()[]{}'.


**Solution**

**Approach**

To solve this problem, we need a way to match each opening parenthesis with the correct closing one, ensuring they are properly ordered. This can be achieved efficiently using a `stack`.

**Core Idea**

A stack is a data structure that follows the Last-In, First-Out (LIFO) principle, which is perfect for matching parentheses. The idea is:

- When an opening parenthesis ( `{`, `[`, or `(` ) is encountered, it is pushed onto the stack.
- When a closing parenthesis ( `}`, `]`, or `)` ) is encountered, the stack is checked:
    - If the stack is not empty and the top of the stack has the matching opening parenthesis, pop the stack.
    - If the stack is empty or the top does not match, return `false` immediately.

After processing all characters in the string, if the stack is empty, all parentheses have been matched correctly, so the string is valid. Otherwise, it's invalid.

