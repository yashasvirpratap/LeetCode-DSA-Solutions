class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i = n / 2; i >= 1; i--) {
            if (n % i == 0) {
                int times = n / i;
                string pattern = s.substr(0, i);
                string substr = "";  // Move this declaration here
                while (times--) {
                    substr += pattern;
                }
                if (substr == s) return true;
            }
        }
        return false;
    }
};
