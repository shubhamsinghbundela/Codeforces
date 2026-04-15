#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

//Tried using prefix sum
#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string str;
    cin>>str;
    int arr[n];
    for (int i = 0; i < str.size(); i++) {
        if( 
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
          str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' 
        ){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
        arr[i]=sum;
    }
    
    int l=0;
    int r=k-1;
    while(r<n){
        if(l==0){
            cout<<arr[r]<<" ";
        }else{
            cout<<arr[r]-arr[l-1]<<" ";
        }
        l++;
        r++;
    }
}
 
// Tried using sliding window
signed main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string str;
    cin >> str;
 
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
        ) {
            count += 1;
        }
    }
    cout << count << " ";
    for (int i = k; i < n; i++) {
        if (
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
        ) {
            count += 1;
        }
        if (
            str[i - k] == 'a' || str[i - k] == 'e' || str[i - k] == 'i' || str[i - k] == 'o' || str[i - k] == 'u' ||
            str[i - k] == 'A' || str[i - k] == 'E' || str[i - k] == 'I' || str[i - k] == 'O' || str[i - k] == 'U'
        ) {
            count -= 1;
        }
        cout << count << " ";
    }
}
