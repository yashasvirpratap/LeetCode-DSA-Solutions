class Solution {
    public int findMiddleIndex(int[] nums) {
      int totalsum=0;
int leftsum=0;
for(int i=0;i<nums.length;i++){
totalsum=totalsum+nums[i];
}
            for(int i=0;i<nums.length;i++){
        
         
        if((2*leftsum)==(totalsum-nums[i])){
           
            return i;
            
        }
        leftsum=leftsum+nums[i];
    }
   
    return -1;
}
    }
