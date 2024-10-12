class Solution {
public:
    int bitwiseComplement(int num) {
   {if(num==0)return 1;
    int ans = 0;
    for (int i = 0; num > 0; i++) {
        ans += pow(2, i) * (!(num % 2));
        num /= 2;
    }
    return ans;
}
    }
};