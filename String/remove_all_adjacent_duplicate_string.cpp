class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        int n = s.length();
        for(int i=0;i<n;i++){
           if(ans.empty())
           {
               ans.push_back(s[i]);
           }
           else if(ans[ans.length()-1] == s[i])
            {
                ans.pop_back();
            }    
            else
            {
                ans.push_back(s[i]);
            }
                
           
        }
        return ans;
    }
};

//another solution same way stack 
    string removeDuplicates(string S) {
        string res = "";
        for (char& c : S)
            if (res.size() && c == res.back())
                res.pop_back();
            else
                res.push_back(c);
        return res;
    }