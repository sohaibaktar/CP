#include <bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char name[100];
    // cin >> name;
    cin.getline(name,54);

    for (int i = 0; i < 20; i++)
    {
        cout << "index no  " << i << "value is " << name[i] << " int value " << (int)name[i] << endl;
    }
    return 0;
}