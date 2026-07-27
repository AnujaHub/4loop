# Q1: Pattern

**Output:**

```text
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```


# Q2: Two Sum

Problem Statement: Given an array of integers arr[] and an integer target.

Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Examples

Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
Output : [1,3]
Explanation: arr[1] + arr[3] = 14.  



# Q3: Stock Buy And Sell

Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

Note: That buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

# Q4 Sort an array of 0s, 1s and 2s

Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

EX.
Input: nums = [1, 0, 2, 1, 0]
Output: [0, 0, 1, 1, 2]
Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

# Q5 Spiral Traversal of Matrix

Problem Statement: Given a Matrix, print the given matrix in spiral order.

Input: Matrix[][] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }
Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
Explanation: The output of matrix in spiral form.

Input: Matrix[][] = { { 1, 2, 3 }, { 4, 5, 6 },{ 7, 8, 9 } }
Output: 1, 2, 3, 6, 9, 8, 7, 4, 5.
Explanation: The output of matrix in spiral form.


# Q6 Remove Duplicates in-place from Sorted Array

Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It doesn't matter what you leave beyond the first k elements.

Examples
Input: arr[]=[1,1,2,2,2,3,3]
Output: [1,2,3,_,_,_,_]
Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.


# Q7 Find the Majority Element that occurs more than N/2 times

Problem Statement: Given an integer array nums of size n, return the majority element of the array.

The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

Input:
 nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
Output:
 7  