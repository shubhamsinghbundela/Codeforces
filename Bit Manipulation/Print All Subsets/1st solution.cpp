#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int checkIthBit(int n, int mask) {
    return n & mask;
}
 
 
signed main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    for (int i = 1; i < (1LL<<n); i++) {
        for (int j = 0; j < n; j++) {
            int mask = 1LL<<j;
            if(checkIthBit(i, mask)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}