#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar

void second_smallest_largest(vector<int> &arr , int n){
    // brute force -- sorting approach
    // Here if duplicate value found then not working in some case.
     if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr.begin(),arr.end());
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}
void second_smallest_largest_2(vector<int> &arr , int n){
    int small = INT_MAX, second_small  = INT_MAX;
    int large= INT_MIN, second_large = INT_MIN;
     if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array

    for (int i = 0; i < n; i++)
    {
        small= min(small,arr[i]);
        large = max(large,arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]< second_small && arr[i] != small)
            second_small = arr[i];
            
        if(arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }
    
     cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
    
}
int second_smallest_3(vector<int> &arr , int n){

    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;   
}
int second_largest_3(vector<int> &arr , int n){
    if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large; 


}

int main(){
     vector<int> arr;
    arr = {2,5,1,3,0};
    int n = arr.size();
    int ss = second_smallest_3(arr,n);
    int sl = second_largest_3(arr,n);

    cout<<"Second smallest is "<<ss<<endl;
    cout<<"Second largest is "<<sl<<endl;
    return 0;
}