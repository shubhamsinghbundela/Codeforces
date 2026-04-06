#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
    }
    
    for (int i = 0; i < count0; i++) {
        cout<<0<<" ";
    }
    for (int i = 0; i < count1; i++) {
        cout<<1<<" ";
    }
}

//Geeks for Geeks solution:


class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i]==0){
                count0++;
            }
            if(arr[i]==1){
                count1++;
            }
        }
        
        for (int i = 0; i < count0; i++) {
            arr[i]=0;
        }
    for (int i = count0; i < count0 + count1; i++) {
        arr[i] = 1;
    }

    }
};