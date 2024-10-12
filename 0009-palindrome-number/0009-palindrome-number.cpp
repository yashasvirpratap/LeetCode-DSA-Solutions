class Solution {
public:
    bool isPalindrome(int x) {
        string str= to_string(x);
        int n=str.length();
        int i=0;
        while(i<n){
            if(str[i]!=str[n-1])return false;
            i++;n--;
        }return true;
    }
};