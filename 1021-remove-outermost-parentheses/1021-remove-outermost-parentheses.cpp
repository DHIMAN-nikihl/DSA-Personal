class Solution {
public:
    string removeOuterParentheses(string s){
        string str;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(cnt>0){
                    str.push_back(s[i]);
                }
               cnt++;
            }
            else{
                    cnt--;
                if(cnt>0){
                    str.push_back(s[i]);
                }
                
            }
        }
        return str;
    }
};