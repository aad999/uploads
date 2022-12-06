class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> minUpto;
        minUpto.resize(n, INT_MIN);
        int maxDiff = 0;
        minUpto[0] = prices[0];
        for(int i = 1; i<n; i++){
            minUpto[i] = min(minUpto[i-1], prices[i]);
            maxDiff = max(maxDiff, prices[i] - minUpto[i]);
        }
        return maxDiff;
    }
};