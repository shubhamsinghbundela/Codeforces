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
    
    sort(arr, arr + n);
  
    
    for (int i = 0; i < q; i++) {
        int x;
        cin>>x;
        int l=0;
        int r=n-1;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]<=x){
                l=mid+1;
                ans=arr[mid];
            }else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}