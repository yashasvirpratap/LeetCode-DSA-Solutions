class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        int s = 0, e = n - 1;

        // Handle edge cases for first and last element
       if(n==1||nums[0]!=nums[1]) return nums[0];
        if (nums[e] != nums[e-1]) return nums[e];

        // Binary search in the range [1, n-2]
        s = 1;
        e = n - 2;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // Check if mid is the single element
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // Check the side to continue searching
            boolean isEven = (mid % 2 == 0);
            if ((isEven && nums[mid] == nums[mid + 1]) || (!isEven && nums[mid] == nums[mid - 1])) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return -1; // This will never be reached due to the problem guarantees
    }
}
