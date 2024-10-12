class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int lsum=0, rsum=0;
        for(int i=0;i<nums.size();i++){
        
            if(lsum*2==total-nums[i]){
                return i;
            }
            lsum=lsum+nums[i];
        }return -1;
    }
};