#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;
    while (l <= r) {
        if(arr[l]==0){
            l++;
        }else{
            swap(arr[l], arr[r]);
            r--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}