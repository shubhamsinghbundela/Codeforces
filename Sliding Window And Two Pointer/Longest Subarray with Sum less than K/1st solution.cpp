#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0;
    int longest = LLONG_MIN;
    int sum = 0;
    for (int r = 0; r < n; r++) {
        sum+=arr[r];
        //run till sum>=k
        while(sum>=k){
            sum-=arr[l];
            l++;
        }
        longest=max(longest,r-l+1);
    }
    cout<<longest;
}