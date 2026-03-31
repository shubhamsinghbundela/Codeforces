#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int goodNumberSize;
    cin >> goodNumberSize;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int goodNumber[goodNumberSize];
    for (int i = 0; i < goodNumberSize; i++) {
        cin>>goodNumber[i];
    }
    
    // created map
    unordered_map < int, int > m;
    
    // add all goodNumber in map
    for (int i = 0; i < goodNumberSize; i++) {
        m[goodNumber[i]]=0;
    }
    
    
    // count of good numbers in each subarray
    int count = 0;
    for (int i = 0; i < k; i++) {
        if(m.contains(arr[i])){
            m[arr[i]]++;
            if(m[arr[i]]>0){
                count+=1;
            }
        }
    }
    cout<<count<<" ";
    
    for (int i = k; i < n; i++) {
        if(m.contains(arr[i-k])){
            if(m[arr[i-k]]>0){
                m[arr[i-k]]-=1;
                count-=1;
            }
        }
        
        if(m.contains(arr[i])){
            m[arr[i]]++;
            if(m[arr[i]]>0){
                count+=1;
            }
        }
        cout<<count<<" ";
    }
}