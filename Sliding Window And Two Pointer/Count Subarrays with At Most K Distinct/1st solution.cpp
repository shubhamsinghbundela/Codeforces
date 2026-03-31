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
    int count = 0;
    map <int, int> m;
    for (int r = 0; r < n; r++) {
        m[arr[r]]++;
        while(m.size()>k){
            m[arr[l]]-=1;
            if(m[arr[l]]==0){
                m.erase(arr[l]);
            }
            l++;
        }
        count+=(r-l+1);
    }
    cout<<count;
}