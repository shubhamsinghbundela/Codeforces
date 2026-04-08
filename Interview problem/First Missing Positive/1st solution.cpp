class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();

        int i = 0;
        while (i < n) {
            // ✅ Check validity BEFORE using arr[i] - 1
            if (arr[i] > 0 && arr[i] <= n) {
                int correct = arr[i] - 1;

                if (arr[i] != arr[correct]) {
                    swap(arr[i], arr[correct]);
                    continue; // recheck same index
                }
            }
            i++;
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};