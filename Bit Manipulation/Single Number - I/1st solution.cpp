#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int find = 0;
    
    for (int i = 0; i < n; i++) {
        find ^= arr[i];
    }
    
    cout<<find;
}