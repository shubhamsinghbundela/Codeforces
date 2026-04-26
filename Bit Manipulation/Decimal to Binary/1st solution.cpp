#include <bits/stdc++.h>
 
 using namespace std;
 
 #define int long long
 
 int checkIthBit(int n, int mask){
     return n & mask;
 }
 
 signed main() {
     int n;
     cin>>n;
     bool started = false;
     for(int i=60;i>=0;i--){
        int mask = 1LL<<i;
        int ans = checkIthBit(n,mask);
        // cout<<ans<<endl;
        if(checkIthBit(n,mask)){
            cout<<1;
            started=true;
        }else{
            if (started) {
                cout << 0;
            }
        }
     }
     if (n == 0) cout << 0;
 }