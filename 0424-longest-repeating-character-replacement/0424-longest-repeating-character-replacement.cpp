class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxf = 0, maxlen = 0;
        int hash[26] = {0};
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxf = max(maxf,hash[s[r]-'A']);
            int change = (r-l+1)-maxf;
            if(change>k){
                hash[s[l]-'A']--;
                maxf = 0;
                l++;
            }
            if(change<=k){
                maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};