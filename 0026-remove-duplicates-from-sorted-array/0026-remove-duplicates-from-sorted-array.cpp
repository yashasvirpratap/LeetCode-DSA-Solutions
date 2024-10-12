class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int check=0,i=1;
        while(i<nums.size()){
            if(nums[check]==nums[i]) i++;
            else{
                check++;
                nums[check]=nums[i];
                i++;
            }

        }
        return check+1;
    }
};