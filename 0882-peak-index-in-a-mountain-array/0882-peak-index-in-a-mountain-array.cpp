class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
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
            else if (arr[mid] < arr[mid - 1]) {
                end = mid - 1; // Move the end pointer to the left.
            }
        }

        return ans;
    }
};
