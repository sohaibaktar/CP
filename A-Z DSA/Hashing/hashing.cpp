#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 

int main(){
    
    int n;
     cin >> n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
     }

     //precompute
     int hash[10000000] = {0};
     for (int i = 0; i < n; i++)
     {
        hash[arr[i]]+=1;
        // for string 
        //hash[s[i]-'a']++;
     }
     


     int q;
     cin >> q;
     while(q--){
        int number;
        cin >> number;
        // fetch
        cout<< hash[number] << endl;
    }
     

return 0;
}