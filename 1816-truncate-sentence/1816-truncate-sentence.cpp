class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word, result;

        while (k-- && ss >> word) {
            if (!result.empty()) result += " ";
            result += word;
        }

        return result;
    }
};