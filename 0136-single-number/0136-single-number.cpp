class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,ans;
        
            while(i<n-1){
                if(nums[i]==nums[i+1]){
                    i=i+2;
                }
                else{
                    return nums[i];
                }
            }return nums[n-1];
        
    }
};