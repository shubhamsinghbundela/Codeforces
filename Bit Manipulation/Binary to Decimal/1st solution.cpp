#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    string str;
    cin >> str;
 
    int n = str.size();
    int sum = 0;
 
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == '1') {
            sum += 1LL << (n - 1 - i);  // ✅ fixed
        }
    }
 
    cout << sum;
}