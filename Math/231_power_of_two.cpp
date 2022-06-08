/*
Source: https://leetcode.com/problems/power-of-two/
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1

*/


class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;

    }
};