#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
void setZero(vector <vector<int>> & matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int > dmy1(rows, -1),dmy2(cols, -1);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(matrix[i][j] ==0){
                dmy1[i] =0;
                dmy2[j] =0;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(dmy1[i] ==0  || dmy2[j] ==0){
                matrix[i][j] =0;
            }
        }
    }

    
}

int main(){
    vector <vector <int> > arr;
    arr = {{1,1,1},{1,0,1},{1,1,-1}};
    setZero(arr);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
    cout << "\n";
    }
    return 0;
}