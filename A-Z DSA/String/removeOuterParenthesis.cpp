class Solution {
public:
//see- https://www.youtube.com/watch?v=MLfAFCkzChU
/* algo:
   1. check stack empty ? if true then put the 1st char and this will be not ans as it's outermost.

   2. add another cha, check stack is empty or not, if not then it means this char should be in our ans string add it their and then place it inside stack.

   3. add another char if it's a closing bracket then remove it's opening bracket from stack and check if stack gets empty after this or not, if yes then it was outermost don't add in ans, if not empty the this can be added to ans string.
*/

    string removeOuterParentheses(string s) {
        stack<char> st;
        if(s=="" || s=="()") return "";
        string ans="";
        int n=s.size();
        int i=0;
        while(i<n)
        {
            if(st.empty())
            {
                st.push(s[i]);
                
            }
            else
            {
                if(s[i]=='(')
                {
                    ans+=s[i];
                    st.push(s[i]);
                    
                }
                else
                {
                    st.pop();
                    if(!st.empty()) ans+=s[i];
                }
            }
            i++;
        }
        return ans;
// PLEASE UPVOTE THANK YOU
    }
};