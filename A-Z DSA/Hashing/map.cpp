#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 

int main(){
    
    int n;
     cin >> n;
     int arr[n];
     map<int ,int> mp;

     for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
        mp[arr[i]]++;
     }

     //precompute
     
    
    //iterate in the loop
     for(auto it :mp){
        cout << it.first << "--> " << it.second << endl;
     }
     
     


     int q;
     cin >> q;
     while(q--){
        int number;
        cin >> number;
        // fetch
        cout<< mp[number] << endl;
    }
     

return 0;
}