class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
       int start = 1;
        int end = arr.size() - 2;
        if(n==1||arr[0]>arr[1]) return 0;
        if (arr[n-1] > arr[n-2]) return n-1;
        int ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                ans = mid; // Update ans to the peak index if found.
                break; // Break the loop once peak is found.
            }
            else if (arr[mid] < arr[mid + 1]) {
                start = mid + 1; // Move the start pointer to the right.
            }
            else {
                end = mid - 1; // Move the end pointer to the left.
            }
        }

        return ans;
     
    }
};