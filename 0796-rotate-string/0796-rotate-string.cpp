class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int k = n*(n+1)/2;
        if(n != goal.size()) return false;
        for(int i = 0; i < n; i++){
            string r = s.substr(i)+s.substr(0,i);
            if(r == goal) return true;
        }
        return false;
    }
};