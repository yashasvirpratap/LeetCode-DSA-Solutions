class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1, e = *max_element(nums.begin(),nums.end());int ans=0;
        while(s<=e){
            int sum=0;
            int mid=s+(e-s)/2;
            for(int i=0;i<nums.size();i++){
              sum+=  (nums[i]+mid-1)/mid;
            }
            if(sum>threshold){
                s=mid+1;
            }
            else{
                
                ans=mid;
                e=mid-1;
            }

        }return ans;
    }
};