#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //1st solution -- Write your printDivisors function here
    // mind solution - tc O(n)
    // void printDivisors(int n){
    //     for(int i=1;i<=n;i++){
    //         if(n%i ==0)
    //             cout << i << " ";
    //     }
    // }

    // 2nd approach solution
    // total tc -- o(sqrt(n)) + O(n* logn) + O(n)
    void printDivisors(int n){
        vector<int> ls;
        // sqrt complexity is high for mathematical formula.
        // use i*i<=n instead of i <= sqrt(n)
        // tc - o(sqrt(n))
        for(int i=1;i*i<=n;i++){
            if(n%i ==0)
                ls.push_back(i);
                if(n/i != i)
                    ls.push_back(n/i);
        }
        // sort tc - o(n * logn)
        sort(ls.begin(),ls.end());
        // print vector tc - 0(n)
        for(auto it : ls) 
            cout << it << " "; 
    }

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}