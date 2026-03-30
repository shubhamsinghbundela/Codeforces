//Input
// n= 4
// arr= [1 7 -5 6]

//Output
// 1
// 8
// 3
// 9
// 7
// 2
// 8
// -5
// 1
// 6

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
       for (int r = l; r < n; r++) {
           int sum = 0;
           for(int i=l;i<=r;i++){
               sum+=arr[i];
           }
           cout<<sum<<endl;
       }
   }
}