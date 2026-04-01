#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
    int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    cin>>arr[i];
	}
	int smallest = LLONG_MAX;
	int sum = 0;
	int l = 0;
	for (int r = 0; r < n; r++) {
	    sum += arr[r];
	    while(sum>k){
	        smallest=min(smallest, r-l+1);
	        sum-=arr[l];
	        l++;
	    }
	}
	if (smallest == LLONG_MAX) {
        cout << -1;
    } else {
        cout << smallest;
    }
}
 
 