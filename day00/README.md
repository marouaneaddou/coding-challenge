**Two Sum Problem**

**Problem Description**

Given an array of integers nums and a target integer target, return the indices of the two numbers such that they add up to the target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

    Input: nums = [3,2,4], target = 6
    Output: [1,2]

Example 3:

    Input: nums = [3,3], target = 6
    Output: [0,1]

Constraints

    2 <= nums.length <= 10^4
    -10^9 <= nums[i] <= 10^9
    -10^9 <= target <= 10^9  

    Only one valid answer exists.

**Solution**

**Approach**

To solve this problem, we can use a brute-force approach with a nested loop, but this method results in a time limit exceeded error for large inputs.

A more efficient approach is to use a hash map to store the numbers we've already seen while iterating through the array. For each element, we check if the complement ( target - current_element ) exists in the hash map. If it does, we return the indices of the two numbers. This approach allows us to find the solution in O(n) time complexity. 
