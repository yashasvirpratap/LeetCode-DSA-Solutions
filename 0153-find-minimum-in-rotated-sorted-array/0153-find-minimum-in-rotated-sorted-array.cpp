class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        
        int minValue = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] < minValue) {
                minValue = nums[i];
            }
        }
        
        return minValue;
    }
};
