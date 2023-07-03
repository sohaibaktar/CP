#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
void merge(vector<int> &arr , int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]);
         left++;
    }
    while(right <= high){
         temp.push_back(arr[right]);
         right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void merge_sort(vector<int> &arr, int low , int high){
     if(low==high) return;
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    
    vector<int> arr{1,3,2,2,3,6,4};
    int n = arr.size();

    merge_sort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;
}