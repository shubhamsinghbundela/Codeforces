#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    
    for (int i = 0; i < q; i++) {
        int target;
        cin>>target;
        int l=0;
        int r=n-1;
        bool found = false;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]==target){
                cout<<mid+1<<endl;
                found = true;
                break;
            }else if(arr[mid]<target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if (!found) cout << -1 << endl;
    }
}