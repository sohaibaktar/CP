#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
int findmissing(vector <int> & arr){
    int n = arr.size()+1;
    cout << n << endl;

    vector <int> substitute(n,0);
    vector <int> ans;
            //print substitute;
            for(int i=0; i < n ;i++)
            std::cout << substitute.at(i) << ' ';
            cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        substitute[arr[i]]++;
    }
            //print substitute;
            for(int i=0; i < n ;i++)
            std::cout << substitute.at(i) << ' ';
    for(int i=1;i<=arr.size();i++){
            if(substitute[i]==0 || substitute[i] >1)
                ans.push_back(i);
    }
    //print ans
     //print substitute;
     cout << endl;
            for(int i=0; i < ans.size() ;i++)
            std::cout << ans.at(i) << ' ';
    

}
vector<int> findidoptimally(const vector<int> &A){
    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    return ans;
}
int main(){
    vector<int> arr;
    arr = {3,1,2,5,3};
    //findmissing(arr);
    //cout << findmissing(arr) << endl;
    //cout << findidoptimally(arr) << endl;
    findidoptimally(arr)
    return 0;
}