#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string encode(string message)
{
    //   Write your code here.
    unordered_map<string,int> umap;
    for(int i=0;i<message.length();i++){
        umap[message[i]]++;
    }
    for(auto c:umap){
        cout << c.first()+c.second();
    }
}

int main()
{
    string s;
    getline(cin, s);
    string ans = encode(s);
    cout << ans << endl;
}