class Solution {
public:

void swap(vector<int>& nums, int a,int b){
    int temp=nums[a];
    nums[a]=nums[b];
    nums[b]=temp;
}

    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        while(i<=j){
           
                if(nums[i]==val)
                {
                    swap(nums,i,j);
                    j--;
                }
                else
                i++;

            }
          return i;  
        //or return j+1;
    }
        
   
    
};