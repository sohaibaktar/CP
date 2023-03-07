#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
//time complexity : O(n*log(n))+O(n)+O(n)
//space complexity: O(n)
void merging(int arr1[] , int arr2[] , int m , int n){
    int arr3[m+n];
    int k=0;
    for (int i = 0; i < m; i++)
    {
        arr3[k++] = arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[k++] = arr2[i];
    }
    sort(arr3,arr3+m+n);
    k =0;
    for (int i = 0; i < m; i++)
    {
        arr1[i] = arr3[k++];
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr3[k++];
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