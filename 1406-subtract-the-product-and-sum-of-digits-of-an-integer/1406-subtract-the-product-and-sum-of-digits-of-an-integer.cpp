class Solution {
public:
    int subtractProductAndSum(int num) {
               int sum=0,product=1;
        while(num!=0){
            
            sum=sum+(num%10);
            product=product*(num%10);
            num=num/10;
        }
      
      return product-sum;
    }
};