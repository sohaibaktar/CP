#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            temp.push_back(a[i]);
    }

    int temp_size= temp.size();

    for(int i=0;i<temp_size;i++){
        a[i] = temp[i];
    }

    for(int i=temp_size;i<n;i++){
        a[i] = 0;
    }
    return a;
}

 

