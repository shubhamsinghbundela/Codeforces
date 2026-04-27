#include <bits/stdc++.h>

using namespace std;

#define int long long

int checkIthBit(int n, int mask) {
    return n & mask;
}

signed main() {
    int n;
    cin >> n;
    
    int count = 0;
    
    while(n){
        count++;
        n=n&(n-1);
    }
    
    cout<<count++;
}