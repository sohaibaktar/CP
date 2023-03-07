#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 void merging(int nums1[] ,int nums2[] ,int m , int n){
     int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
     
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