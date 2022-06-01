/*
Given a string s, return the string after replacing every uppercase letter 
with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"



*/


class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};