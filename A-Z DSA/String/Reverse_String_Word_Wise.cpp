#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string str)
{
    vector<string> v;
    string ans = "";
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        string temp = "";
        while (!isspace(str[i]) && i < n)
        {
            temp.push_back(str[i++]);
        }
        if (!temp.empty())
        {
            v.push_back(temp);
        }
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans.append(v[i]);
        if (i > 0)
            ans.append(" ");
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}