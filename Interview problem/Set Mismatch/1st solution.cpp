#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0;
    while (i < n) {
        int correct = arr[i] - 1;
        if (arr[i] != arr[correct]) {
            swap(arr[i], arr[correct]);
        } else {
            i++;
        }
    }
    vector<int> nums;
    for (int i = 0; i < n; i++) {
       if(arr[i]!=i+1){
           nums.push_back(arr[i]);
           nums.push_back(i+1);
       }
    }
    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i];
    }
}