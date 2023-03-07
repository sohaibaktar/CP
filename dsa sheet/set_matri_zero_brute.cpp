#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
//this is brute force Approach of Set MAtrix Zero.
int setZero(vector <vector <int> > & matrix){
    int rows = matrix.size(); // row 
    int cols = matrix[0].size(); // columns
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
             //check if matrix index in is then go down ,otherwise go to next index.
            if(matrix[i][j]==0){
                //part 1st corner.
                int ind =i-1;
                while(ind >=0){
                    if(matrix[ind][j] !=0){
                        matrix[ind][j] =-1;
                    }
                    ind--;
                }
                // part 2 --> next matrix element.
                ind = i+1;
                while(ind <rows){
                    if(matrix[ind][j] !=0){
                        matrix[ind][j] =-1;
                    }
                    ind++;
                }
                // now for j role
                // this is 1st j corner role
                ind = j-1;
                while(ind >=0){
                    if(matrix[i][ind] !=0){
                        matrix[i][ind] =-1;
                    }
                    ind--;
                }
                // after the element of j 
                ind = j+1;
                while(ind<cols){
                    if(matrix[i][ind] !=0){
                        matrix[i][ind] =-1;
                    }
                    ind++;
                }
            }          
        }
    }

     // now set all -1 to 0
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    if(matrix[i][j]==-1){
                        matrix[i][j]=0;
                    }
                }
                
            }
}

int main(){
    vector <vector <int> > arr;
    arr = {{1,1,1},{1,5,0},{1,1,1}};
    setZero(arr);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
    cout << "\n";
    }
    return 0;
}