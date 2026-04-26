#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
   int n;
   cin>>n;
   int current = 1;
   while(current <= n){
       cout<<current<<" ";
       current*=2;
   }
}
