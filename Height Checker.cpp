class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c=0;
        vector<int> expt;
        expt = heights;
        sort(expt.begin(),expt.end());
        for(int i=0; i<heights.size(); i++)
        {
            if(heights[i] != expt[i])
                c++;
        }
        return c;
    }
};
