// https://codeforces.com/group/4vcXCPx8NY/contest/681788/problem/G
#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string str;
    cin>>str;
    int l = 0;
    int longest = LLONG_MIN;
    map <int, int> m;
    for (int r = 0; r < n; r++) {
        m[str[r]]++;
        while(m.size()>k){
            m[str[l]]-=1;
            if(m[str[l]]==0){
                m.erase(str[l]);
            }
            l++;
        }
        longest=max(longest,r-l+1);
    }
    cout<<longest;
}