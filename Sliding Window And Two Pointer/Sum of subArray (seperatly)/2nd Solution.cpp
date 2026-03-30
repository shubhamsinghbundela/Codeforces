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
   int sum = 0;
   for (int i = 0; i < n; i++) {
       sum+=arr[i];
       arr[i]=sum;
   }
   for (int l = 0; l < n; l++) {
       for (int r = l; r < n; r++) {
          if(l==0){
              cout<<arr[r]<<endl;
          }else{
              cout<<arr[r]-arr[l-1]<<endl;
          }
       }
   }
}