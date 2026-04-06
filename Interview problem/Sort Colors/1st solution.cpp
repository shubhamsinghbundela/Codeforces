class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int l = 0;
        int r = n-1;
        while(i<=r){
            if(arr[i]==0){
                swap(arr[l], arr[i]);
                l++;
                i++;
            }else if(arr[i]==1){
                i++;
            }else{
                swap(arr[i],arr[r]);
                r--;
            }
        }
    }
};