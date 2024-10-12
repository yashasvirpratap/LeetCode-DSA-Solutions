#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            
            return n;
        }

        int pos = 1;
        int count = 0;

        
        for (int i = 1; i < n; i++) {
            
            if (nums[i] == nums[i - 1]) count++;
            else count=0;
            
                if (count < 2) {
                    nums[pos++] = nums[i]; 
                }
            }
        return pos; 
    }
};
