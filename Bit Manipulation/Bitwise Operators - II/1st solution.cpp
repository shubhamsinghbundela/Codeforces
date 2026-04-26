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
    
    int andOperator=arr[0];
    int orOperator=arr[0];
    int xorOperator=arr[0];
    
    for (int i = 1; i < n; i++) {
        andOperator&=arr[i];
        orOperator|=arr[i];
        xorOperator^=arr[i];
    }
    
    cout<<andOperator<<" ";
    cout<<orOperator<<" ";
    cout<<xorOperator<<" ";
    
 }
