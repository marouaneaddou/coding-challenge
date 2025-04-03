    💡 Count and Say 💡

**💡 Problem Description**

The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

* `countAndSay(1) = "1"`
* `countAndSay(n)` is the run-length encoding of `countAndSay(n - 1)`.

 [Run-length encoding](https://en.wikipedia.org/wiki/Run-length_encoding) (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string `"3322251"` we replace `"33"` with `"23"`, replace `"222"` with `"32"`, replace `"5"` with `"15"` and replace `"1"` with `"11"`. Thus the compressed string becomes `"23321511"`.

Given a positive integer `n`, return the `n^th` element of the count-and-say sequence.

 

Example 1:

    Input: n = 4

    Output: "1211"

    Explanation:
    countAndSay(1) = "1"
    countAndSay(2) = RLE of "1" = "11"
    countAndSay(3) = RLE of "11" = "21"
    countAndSay(4) = RLE of "21" = "1211"

Example 2:

    Input: n = 1

    Output: "1"

    Explanation:

    This is the base case.

Example 3:

    Input: n = 3

    Output: "21"

Example 3:

    Input: n = 5

    Output: "111221"

Example 4:

    Input: n = 8

    Output: "1113213211"

Example 5:

    Input: n = 15

    Output: "311311222113111231131112132112311321322112111312211312111322212311322113212221"
 

Constraints:

- `1 <= n <= 30`
