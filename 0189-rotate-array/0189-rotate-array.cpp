class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();int k1=nums.size()-k;
        vector<int> temp(k);
        //storing last k elements in temp
       for(int i=0;i<k;i++){
        temp[i]=nums[k1+i];
       }
       //shifting
      
       for(int i=k1-1;i>=0;i--){
        nums[i+k]=nums[i];
       }
       //merging
       for(int i=0;i<k;i++){
        nums[i]=temp[i];
       }
       
        }
    
};