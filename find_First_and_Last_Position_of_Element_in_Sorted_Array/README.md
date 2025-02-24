    💡 Find First and Last Position of Element in Sorted Array 💡

**💡 Problem Description**

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with` O(log n)` runtime complexity.

 

Example 1:

    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]

Example 2:

    Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]

Example 3:

    Input: nums = [], target = 0
    Output: [-1,-1]

Example 4:

    Input: nums = [2,2], target = 0
    Output: [0,1]

Example 5:

    Input: nums = [3,3,3], target = 0
    Output: [0,2]

Example 6:

    Input: nums = [1], target = 1
    Output: [0,0]

 

Constraints:

- `0 <= nums.length <= 105`
- `-109 <= nums[i] <= 109`
- `nums` is a non-decreasing array.
- `-109 <= target <= 109`

