#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
//1 2 3 4 5 ...n
void printNo(int N){
    if(N ==0) return;
    
    printNo(N-1);
    cout << N << " ";
}
//1+2+3+4+...+n
int sumToN(int n){
    if(n==0) return 0;

    return n + sumToN(n-1);
    }
// 1^3 +2^3 +3^3 ....n^3
int sumToN(int n){
    if(n==0) return 0;

    return n*n*n + sumToN(n-1);
    

}

int main(){
    
   int n=5;
   printNo(n);
   cout << endl;
   cout << sumToN(n) << endl;;

return 0;
}