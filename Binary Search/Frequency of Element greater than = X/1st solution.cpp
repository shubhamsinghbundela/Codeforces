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
        int target;
        cin>>target;
        if(target<arr[0]){
            cout<<n<<endl;
            continue;
        }
        if(target>arr[n-1]){
            cout<<0<<endl;
            continue;
        }
        int l1=0;
        int r1=n-1;
        int first = -1;
        while(l1<=r1){
            int mid = (l1+r1)/2;
            if(arr[mid]>=target){
                first= mid+1;
                r1=mid-1;
            }else if(arr[mid]<target){
                l1=mid+1;
            }else{
                r1=mid-1;
            }
        }
        
        int ans = n-first+1;
        cout<<ans<<endl;
    }
    
}