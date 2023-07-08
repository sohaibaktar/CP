#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 

//function
void print_arr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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
    print_arr(arr,n);
    
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
    
    print_arr(arr,n);

    //bubble sort using recursion
     // Base Case: range == 1.
    if (n == 1) return;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    //Range reduced after recursion:
    bubble_sort(arr, n - 1);
    
}
//insertion sort using recursion 
void insertion_sort(int arr[], int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}
void insertion_sort(int arr[],int n){
    //one approach striver
    // for (int i = 0; i <=n-1; i++)
    // {
    //     int j=i;
    //     while(j>0 && arr[j-1] >arr[j])
    //     {
    //         int temp = arr[j-1];
    //         arr[j-1] = arr[j];
    //         arr[j] = temp;
    //         j--;   
    //     }
    // }

    //2nd approach coding ninja
     // To traverse all the elements.
    for(int i = 1; i < n; ++i) {
        // To store the current element.
        int curr = arr[i];
        // To traverse previous elements.    
        int idx = i - 1;
        
        while(idx >= 0 && arr[idx] > curr) {
            // Change elements position.
            arr[idx + 1] = arr[idx];   
            --idx;
        }
        // Change current element.
        arr[idx + 1] = curr;
    }

    print_arr(arr,n);
    
    
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