#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int checkIthBit(int n, int mask) {
    return n & mask;
}
 
signed main() {
    int n;
    cin >> n;
 
   if(checkIthBit(n,1)==0){
       cout<<"Even";
   }else{
       cout<<"Odd";
   }
 
}