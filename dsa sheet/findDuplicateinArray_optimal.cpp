#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
// optimal Aproach

int findduplicate(vector <int> & num){
        int slow = num[0];
        int fast = num[0];
        do{
            slow = num[slow];
            fast = num[num[fast]];

        }while(slow!= fast);
        fast = num[0];
        while(slow != fast){
            slow = num[slow];
            fast = num[fast];
        }
        return slow;
}
int main(){
    vector<int > arr;
    arr = {2,5,9,6,9,3,8,9,7,1};

    cout << findduplicate(arr) << endl;
    return 0;
}