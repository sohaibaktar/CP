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
    string str;
    char arr[100];
    getline(cin, str);
    cin.getline(arr, 50);
    for (int i = 0; i < 15; i++)
    {
        // cout << "index- " << i << " str-" << str[i] << " char-" << arr[i] << endl;
    }
    string a = "cbcd";
    string b = "bbcd";
    cout << a.compare(b) << endl;
    string bigst = "i love you khuki";
    string smallst = "you";
    cout <<bigst.find(smallst) << endl;
    //npos greatest value
    if(bigst.find(smallst) == std::string::npos){
        cout << "Not Found" << endl;
    }
    return 0;
}