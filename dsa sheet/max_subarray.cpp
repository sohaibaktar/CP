#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
void max_sub(vector<int> &arr){
    int maxe = INT_MIN;
    int end = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
       end = end+arr[i];
            if(end > maxe){
                maxe = end;
            }
            if(end <0){
                end = 0;
            }
       
        
    }
    cout<< maxe <<endl;
    

}
int main(){
    vector<int> arr;
    arr = {-2,1,-3,4,-1,2,1,-5,4};
    max_sub(arr);
    return 0;
}