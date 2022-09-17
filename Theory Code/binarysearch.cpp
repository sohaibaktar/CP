#include <bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start = (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int evenarray[] = {2, 5, 4, 8, 6};

    int ans = binarySearch(evenarray, 5, 4);

    cout << " ans is " << ans << endl;

    return 0;
}