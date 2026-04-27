#include <bits/stdc++.h>
 
 using namespace std;
 
 #define int long long
 
 signed main() {
    int n;
    cin>>n;
    
    
    int ans = n & (n-1);
    if( n> 0 && (n & (n-1))==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
 }
