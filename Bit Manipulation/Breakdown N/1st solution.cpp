 #include <bits/stdc++.h>

 using namespace std;

 #define int long long

 signed main() {
     int n;
     cin >> n;
     int current = 1;
     while (current <= n) {
         current *= 2;
     }
     current /= 2;

     while (current >= 1) {
         if (current <= n) {
             cout << current << " ";
             n = n - current;
         }
         current /= 2;
     }
 }