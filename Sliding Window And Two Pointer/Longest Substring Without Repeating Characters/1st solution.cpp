#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    string str;
    cin>>str;
    int l = 0;
    int longest = LLONG_MIN;
    map <int, int> m;
    for (int r = 0; r < n; r++) {
        while(m.contains(str[r])){
            m[str[l]]-=1;
            if(m[str[l]]==0){
                m.erase(str[l]);
            }
            l++;
        }
        m[str[r]]++;
        longest=max(longest,r-l+1);
    }
    cout<<longest;
}