#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 
class Solution {
public:
//function
int spiralMat(vector<vector<int>> &mat, int n , int  m){
    int up =0,down=m-1,left=0,right=n-1,p=0;
    vector<int > v(m*n);
    while(up <= down && left <= right){
        for(int col = left ; col <=right;col++){
            v[p++] = mat[up][col];
        }
        if(++up > d){
            break;
        }
    }
}
};
int main(){
    int m , n;
    cin >> n>> m;

    int mat[][];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }      
    }
    spiralMat(mat,n ,m);
    
    Solution ob;
    cout <<  << endl;

return 0;
}