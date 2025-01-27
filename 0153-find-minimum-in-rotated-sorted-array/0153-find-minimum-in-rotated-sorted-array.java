class Solution {
    public int findMin(int[] nums) {
          int s=0, e=nums.length-1;int min=Integer.MAX_VALUE;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<=min) {
                min=nums[mid];

            }

            if(nums[s]<=nums[mid]){
                if(nums[s]<=min){
                    min=nums[s];
                    
                }
                s=mid+1;
                

            }
            else{
                
                e=mid-1;
            }

        
    } return min;
    }
}