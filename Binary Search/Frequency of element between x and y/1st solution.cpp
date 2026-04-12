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
        int y;
        cin>>x;
        cin>>y;
        if(x>y){
            cout<<0<<endl;
            continue;
        }
        
        if(x>arr[n-1]){
            cout<<0<<endl;
            continue;
        }
        
        int l1=0;
        int r1=n-1;
        int first = n;
        while(l1<=r1){
            int mid = (l1+r1)/2;
            if(arr[mid]>=x){
                first=mid;
                r1=mid-1;
            }else if(arr[mid]<x){
                l1=mid+1;
            }else{
                r1=mid-1;
            }
        }
        
        int l2=0;
        int r2=n-1;
        int last = -1;
        while(l2<=r2){
            int mid = (l2+r2)/2;
            if(arr[mid]<=y){
                last=mid;
                l2=mid+1;
            }else if(arr[mid]<y){
                l2=mid+1;
            }else{
                r2=mid-1;
            }
        }
        
        if(first==-1){
            cout<<last<<endl;
            continue;
        }
        int ans = last-first+1;
       cout<<ans<<endl;
    }
    
}