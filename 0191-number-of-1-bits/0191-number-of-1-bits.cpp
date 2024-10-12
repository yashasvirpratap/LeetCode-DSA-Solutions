class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n!=0){
            if(n&1)
            count++;
            n=n>>1;
        }return count;
        
    }
};// & with 1 to check the last bit, if it is =1 then, n&1 will return true