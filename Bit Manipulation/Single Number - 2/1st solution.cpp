#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int ans = 0;
    
    for (int j = 0; j < 64; j++) {
        int mask = 1LL << j;   // ✅ moved outside
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] & mask) {   // ✅ inline instead of function
                sum++;
            }
        }
        
        if (sum % 3 != 0) {
            ans |= mask;
        }
    }
    
    cout << ans;
}
