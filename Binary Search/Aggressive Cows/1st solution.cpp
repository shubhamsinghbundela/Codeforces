#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
bool possible(int arr[], int mid, int n, int cow){
    int cowCount = 1;
    int prev= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-prev>=mid){
            cowCount++;
            prev=arr[i];
        }
    }
    return cowCount>=cow;
}
 
signed main() {
    int stall;
    cin >> stall;
    int cow;
    cin >> cow;
    int arr[stall];
    for (int i = 0; i < stall; i++) {
        cin >> arr[i];
    }
    
    int l=0;
    int r=arr[stall-1]-arr[0];
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(possible(arr,mid,stall,cow)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
