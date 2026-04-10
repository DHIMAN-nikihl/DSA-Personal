class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);

        for (int cost : costs)
            freq[cost]++;

        int count = 0;

        for (int price = 1; price <= 100000; price++) {
            while (freq[price] > 0 && coins >= price) {
                coins -= price;
                freq[price]--;
                count++;
            }
        }

        return count;
    }
};