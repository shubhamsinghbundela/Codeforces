#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++) {
       cin>>arr[i];
   }
   
   for (int l = 0; l < n; l++) {
       int sum = 0;
       for (int r = l; r < n; r++) {
          sum+=arr[r];
          cout<<sum<<endl;
       }
   }
}