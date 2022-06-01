/*

You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

 

Example 1:

Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
Example 2:

Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
Output: 7
Explanation: All strings are consistent.





*/



class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int map[26] = {0} , ans = 0;
		for(auto& x:allowed) map[x-'a']++;

		for(auto& word : words){
			bool isConsistent = true;
			for(auto& ch: word){ 
				if(map[ch - 'a'] == 0){
					isConsistent = false;
					break;
				}
			}
			if(isConsistent) ans++;     
		}

		return ans;
    }
};

//solution 2

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt[26] = {}, res = 0;
    for (auto ch :  allowed)
        ++cnt[ch - 'a'];
    for (auto &w : words)
        res += all_of(begin(w), end(w), [&](char ch){ return cnt[ch - 'a'];});
    return res;
    }
};