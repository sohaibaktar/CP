// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
#define MAX_CHARS 26

// This function returns true if
// str1 and str2 are isomorphic
bool areIsomorphic(string s1, string s2)
{
    // int n = str1.length(), m = str2.length();

    // // Length of both strings must be
    // // same for one to one
    // // correspondence
    // if (n != m)
    // 	return false;

    // // For counting the previous appearances of character in
    // // both the strings
    // int count[MAX_CHARS] = { 0 };
    // int dcount[MAX_CHARS] = { 0 };

    // // Process all characters one by one
    // for (int i = 0; i < n; i++) {
    // 	count[str1[i] - 'a']++;
    //     cout << str1[i] -'a' << " str1 " << count[str1[i] - 'a'] << endl;
    // 	dcount[str2[i] - 'a']++;
    //      cout << str2[i] -'a' << "str2 " << dcount[str2[i] - 'a'] << endl;
    // }
    // // For string to be isomorphic the previous counts
    // // of appearances of
    // // current character in both string must be same if
    // // it is not same we return false.

    // // before it was not working for the test case mentioned
    // // below(wrong output)
    // // str1 = "aba" , str2 = "xyy"
    // for (int i = 0; i < n; i++) {
    // 	if (count[str1[i] - 'a'] != dcount[str2[i] - 'a']) {
    // 		return false;
    // 	}
    // }
    // return true;

    if (s1.length() != s2.length())
    {
        return false;
    }

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (int i = 0; i < s1.length(); i++)
    {
        mp1[s1[i]]++;
        mp2[s2[i]]++;

        // mp1[s1[i]] = i + 1;
        // mp2[s2[i]] = i + 1;
        cout << s1[i] << " mp1 " << i + 1 << endl;
        cout << s2[i] << " mp2 " << i + 1 << endl;
    }
   

    for (int i = 0; i < s1.length(); i++)
    {
        // compare the maps if not equal return false;
        cout << mp1[s1[i]]<<"nn" <<mp2[s2[i]] << endl;
        if (mp1[s1[i]] != mp2[s2[i]])
        {
            return false;
        }
    }
    return true;

    // Your code here
    // map<char,char>mp1,mp2;

    // for(int i=0;i<s1.length();i++)
    // {

    //     if(mp1.find(s1[i])== mp1.end() && mp2.find(s2[i])==mp2.end())
    //     {
    //         mp1[s1[i]]=s2[i];
    //         mp2[s2[i]]=s1[i];

    //     }
    //     else{

    //         if(mp1[s1[i]]!=s2[i] || mp2[s2[i]]!=s1[i])
    //         return false;
    //     }

    // }
    // return true;
}

// Driver Code
int main()
{
    cout << (areIsomorphic(
                 "egg", "add")
                 ? "True"
                 : "False")
         << endl;
    return 0;
}
