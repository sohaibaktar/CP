#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
bool isSorted(int arr[], int n){
     for (int i = 1; i < n; i++)
     {
        if(arr[i] < arr[i-1])
            return false;
     }
     return true;
     
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    bool ans = isSorted(arr,n);

    if(ans)
        cout << true << endl;
    else 
        cout << false << endl;
    return 0;
}