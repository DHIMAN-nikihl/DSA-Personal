class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        set<char> st;
        int ml=0, l = 0, r = 0;
        while(r<n){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            ml = max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};