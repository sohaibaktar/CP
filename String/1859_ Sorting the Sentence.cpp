#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Coded by Sohaib Aktar
/*Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
Example 2:

Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
*/

int main()
{
   
    string s = "i1 love3 you2";
    
     string s1 = "";
        vector<string>res(10);
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i])) s1+=s[i];
            else res[s[i]-'0']=s1+" ",s1="",i++;
        }
        for(auto i:res) s1+=i;
        s1.pop_back();
        

        cout << s1;
}