#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 

//function
void slection_sort(int arr[],int n){
    cout << "ok" <<endl;
    for (int i = 0; i <= n-2; i++)
    {
        int mini =i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "ok" <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
void bubble_sort(int arr[],int n){
    for (int i = n-1; i >=1; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
void insertion_sort(int arr[],int n){
    for (int i = 0; i <=n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j-1] >arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            
        }
        
    }
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
    insertion_sort(arr,n);

return 0;
}