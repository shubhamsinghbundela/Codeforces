#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int checkIthBit(int n, int mask) {
    return n & mask;
}
 
signed main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int xorValue = 0;
    for (int i = 0; i < n; i++) {
        xorValue ^= arr[i];
    }
    
    int pos = -1;
    for (int i = 0; i < 64; i++) {
        int mask = 1LL << i;   // ✅ FIXED
        if (xorValue & mask) {
            pos = i;
            break;
        }
    }
    
    int group1 = 0, group2 = 0;
    int mask = 1LL << pos;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] & mask) {
            group1 ^= arr[i];
        } else {
            group2 ^= arr[i];
        }
    }
    
    cout << group1 << " " << group2;
}