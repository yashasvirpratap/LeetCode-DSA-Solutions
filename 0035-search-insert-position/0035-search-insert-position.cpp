class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int start=0;int pos;
        int end=nums.size()-1;
       
        while(start<=end){
             int mid=start+(end-start)/2;
             if(nums[mid]==target) return mid;
            
             else if(nums[mid]>target)end=mid-1;
             else start=mid+1;


        }return start;//because start will give where element is to be inserted
    }
};