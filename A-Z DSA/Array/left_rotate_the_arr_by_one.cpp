#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
/* this is brute force solution , using a another array called temp[] 
 tc --> O(n) one for loop upto n traverse
 sc -- > O(n) for another temp arr

*/
 void solve1(int arr[],int n){
    int temp[n];
    for(int i=1;i<n;i++){
        temp[i-1] = arr[i]; 
    }
    temp[n-1] = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

 }

/* this is optimal solution , using a temp variable
    we need to store arr[0] element in temp variable 
    and lastly add in arr [n-1] elemenet
 tc --> O(n) one for loop upto n traverse
 sc -- > O(n) for another temp arr

*/
 void solve2(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i]; 

        
    }
    arr[n-1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

 }
int main(){
   int arr[] = {13,46,24,52,20,9};
   int n = sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    solve2(arr,n);
return 0;
}