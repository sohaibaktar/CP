#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
int largest_element_1(vector<int>& arr){
    //sol-1
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int largest_element_2(vector<int>& arr){
    //Sol -2 
    //using max varable
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
    

}
int main(){
    vector<int> arr;
    arr = {2,5,1,3,0};
    cout << "Largest Element in Array is " << largest_element_2(arr) << endl;
    return 0;
}