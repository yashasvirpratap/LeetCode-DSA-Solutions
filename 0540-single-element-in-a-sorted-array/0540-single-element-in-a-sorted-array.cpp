class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int singleEl=0;
        for(int i=0;i<nums.size();i++){
            singleEl^=nums[i];
        }return singleEl;
    }
};