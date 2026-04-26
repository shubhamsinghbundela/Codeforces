 #include <bits/stdc++.h>
 
 using namespace std;
 
 #define int long long
 
 signed main() {
     int a;
     int b;
     cin >> a;
     cin >> b;
 
     int andOperator = (a & b);
     int orOperator = (a | b);
     int xorOperator = (a ^ b);
     cout << andOperator << " ";
     cout << orOperator << " ";
     cout << xorOperator << " ";
 }