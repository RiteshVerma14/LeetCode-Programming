class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l,h = 0;
        l = prices[0];
        for(int i=1; i<prices.size(); i++)
        {
            l = min(l,prices[i]);
            h = max(h,prices[i]-l);
        }
        return h;
    }
};
