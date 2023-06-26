
#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 
 class Solution {
public:
    int reverse(int x) {
        int revn=0;
        while(x!=0){
            if(revn>INT_MAX/10 || revn <INT_MIN/10) return 0;
            int lastdigit = x%10;
            x = x/10;
            revn = (revn*10)+lastdigit;
        }
        
        return revn;
    }
};
int main(){
     Solution obj;
     int x = 121;
     cout <<"Reverse number of " <<x<<" is -->"<< obj.reverse(x) << endl;
    return 0;
}