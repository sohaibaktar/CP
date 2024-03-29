#include <bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
void setZero(vector<vector<int>> &matrix)
{
    // Write your code here.
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
            col0 = 0;

        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    // reverse part
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }

            if (col0 == 0)
                matrix[i][0] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> arr;
    arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, -1}};
    setZero(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}