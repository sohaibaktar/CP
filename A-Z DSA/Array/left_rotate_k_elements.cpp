#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void rotateNyK(int arr[],int n, int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
            temp[i] = arr[i];
        }
        //shifting
        for(int i=k;i<n;i++){
            arr[i-k] = arr[i];
        }
        //pull back from temp
        
        for(int i=n-k;i<n;i++){
            arr[i] = temp[i-(n-k)];
            
        }    
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin >> arr[i];
        }
    int k;
    cin >> k;
    rotateNyK(arr,n,k);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}