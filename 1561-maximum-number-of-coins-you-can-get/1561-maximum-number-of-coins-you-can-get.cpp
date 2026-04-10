class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        
        int n = piles.size();
        int rounds = n / 3;
        int ans = 0;

        int index = n - 2; // second largest

        for (int i = 0; i < rounds; i++) {
            ans += piles[index];
            index -= 2;
        }

        return ans;
    }
};