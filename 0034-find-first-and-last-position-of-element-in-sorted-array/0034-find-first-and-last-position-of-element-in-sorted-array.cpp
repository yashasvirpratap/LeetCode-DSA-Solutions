class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { 
        vector<int> ans;int n=nums.size();
        if(n==0) return{-1,-1};
       int firstOcc=firstOccurence(nums,0,n-1,target);
       int lastOcc=lastOccurence(nums,0,n-1,target);
        ans.push_back(firstOcc);
        ans.push_back(lastOcc);


        return ans;
    }

  
    int firstOccurence(vector<int> &nums,int s,int e,int key){
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==key){
            ans=mid;
            e=mid-1;
                       
        }else if(nums[mid]>key){
            e=mid-1;            
        }else{
            s=mid+1;
        }
    }
        return ans;

    }
    int lastOccurence(vector<int> &nums,int s,int e,int key){
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==key){
            ans=mid;
            s=mid+1;
                       
        }else if(nums[mid]>key){
            e=mid-1;            
        }else{
            s=mid+1;
        }
    }
        return ans;

    }
};