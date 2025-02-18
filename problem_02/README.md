    💡  Merge Two Sorted Lists 💡 

**💡 Problem Description**

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:

![image](https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg)

    Input: list1 = [1,2,4], list2 = [1,3,4]
    Output: [1,1,2,3,4,4]

Example 2:

    Input: list1 = [], list2 = []
    Output: []

Example 3:

    Input: list1 = [], list2 = [0]
    Output: [0]



Constraints:

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in non-decreasing order.

<aside>


### 💡 **Approach**

</aside>

> The goal of this problem is to merge two sorted linked lists into a single sorted linked list.
> 

> To efficiently merge the two lists, we iterate through both lists, comparing the current node values, and adding the smaller node to the result list. This approach ensures that the merged list is always sorted.
> 

<aside>

### 💡 **Steps**

</aside>

- **Handle Special Case**:
    - First, check if both `list1` and `list2` are empty (`nullptr`). If so, return `nullptr` immediately, as there is no list to merge.
- **Create Merged List**:
    - Initialize a dummy node to simplify the merging process. A pointer `tmp` is used to keep track of the last node in the merged list as we build it.
- **Traverse Both Lists**:
    - Start by traversing both `list1` and `list2`, comparing the current node values.
    - Add the smaller node to the merged list and move the pointer (`tmp`) to the newly added node.
    - Move the pointer of the list that had the smaller value to the next node.
- **Handle Remaining Nodes**:
    - Once one list is exhausted, append the remaining nodes of the other list directly to the merged list.
    - This is possible because the remaining nodes are already sorted.
- **Return the Merged List**:
    - Finally, return the merged list starting from `head->next`, as `head` is a dummy node used for simplification.

---

