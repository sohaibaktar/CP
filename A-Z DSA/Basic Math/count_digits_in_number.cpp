#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 int count_digits( int n )
{
    // Solution 1 approch first
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;

  // Solution 2
  string x = to_string(n);
  return x.length();

    // solution 3
  int digits = floor(log10(n) + 1);
  return digits;
}
int main(){
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
   return 0;

}