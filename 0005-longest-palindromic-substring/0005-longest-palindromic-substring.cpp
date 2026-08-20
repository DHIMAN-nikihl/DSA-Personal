class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0, maxLen = 1;
        int n = s.size();
        
        for (int center = 0; center < n; center++) {
            int left = center, right = center;
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            if (right - left - 1 > maxLen) {
                maxLen = right - left - 1;
                start = left + 1;
            }
            left = center;
            right = center + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            if (right - left - 1 > maxLen) {
                maxLen = right - left - 1;
                start = left + 1;
            }
        }
        return s.substr(start, maxLen);
 
    }
};