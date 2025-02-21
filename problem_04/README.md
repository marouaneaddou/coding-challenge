    💡 Invert Binary Tree 💡

**💡 Problem Description**
Given the `root` of a binary tree, invert the tree, and return its root.

Example 1:

![image](https://assets.leetcode.com/uploads/2021/03/14/invert1-tree.jpg)


    Input: root = [4,2,7,1,3,6,9]
    Output: [4,7,2,9,6,3,1]

Example 2:

![image](https://assets.leetcode.com/uploads/2021/03/14/invert2-tree.jpg)

    Input: root = [2,1,3]
    Output: [2,3,1]

Example 3:

    Input: root = []
    Output: []

Constraints:

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

**💡 Approach**

The goal is to invert a binary tree by swapping the left and right child of each node.
To achieve this, we use `BFS` `(level-order traversal)` with a `queue` to process nodes iteratively.

**Steps**
- Use a queue to traverse the tree level by level.
- Swap the left and right child of each node.
- Push non-null children into the queue to continue processing.
- Continue until all nodes are inverted.
