#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
void merging(int arr1[] ,int arr2[] ,int m , int n){
     for (int i = 0; i < m; i++)
     {
        if(arr1[i] > arr2[0]){
            swap(arr1[i],arr2[0]);
            sort(arr2,arr2+n);
        }
        
     }
     
}
int main(){
    int arr1[] = {1,4,6,9,10};
    int arr2[] = {2,3,5};

    merging(arr1,arr2,5,3);

     for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";    
    }
    cout << endl;
    return 0;
}