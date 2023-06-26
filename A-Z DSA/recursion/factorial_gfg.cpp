//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
long long ans =1;
vector<long long > v;
void func(long long n,long long i){
    ans*=i;
    if(ans>n) return;
    
    v.push_back(ans);
    func(n,i+1);
}
    vector<long long> factorialNumbers(long long N)
    {
        func(N,1);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends