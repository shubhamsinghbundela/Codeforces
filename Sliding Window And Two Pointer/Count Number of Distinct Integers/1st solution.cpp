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
 
    unordered_map < int, int > m;
 
    for (int i = 0; i < k; i++) {
        m[arr[i]]+=1; // automatically handles insert + increment
    }
 
    cout << m.size() << " ";
 
    for (int i = k; i < n; i++) {
        if(m.contains(arr[i-k])){
            m[arr[i-k]]-=1;
            if(m[arr[i-k]]==0){
                m.erase(arr[i-k]);
            }
        }
        if (m.contains(arr[i])) {
            m[arr[i]]+=1;
        } else {
            m[arr[i]]+=1;
        }
        cout << m.size() << " ";
    }
}
