#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 
 class Solution {
public:
    bool isPalindrome(int x) {
         int n =x;
         long long rev=0;
         if (x < 0) {
            return false;
        }
         while(n!=0){
             
             int rem = n%10;
              rev = (rev*10)+rem;
             n/=10;
            
             
         }
         return (rev == x);
    }
};

int main(){
     Solution obj;
     int x = 123;
     cout << x <<" is Palindrome or not? -->"<< obj.isPalindrome(x) << endl;
    return 0;
}