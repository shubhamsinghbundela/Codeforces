#include <bits/stdc++.h>
 
 using namespace std;
 
 #define int long long
 
 signed main() {
    int n;
    cin>>n;
    
    
    int ans = n & (n-1);
    if( n> 0 && (n & (n-1))==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
 }

 // 2nd solution

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

    for (int i = 0; i < 64; i++) {
        int mask = 1LL << i;
        if (checkIthBit(n, mask)) {
            count++;
        }
    }
    if (count == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}