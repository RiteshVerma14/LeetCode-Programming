class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> vec;
        int n;
        for(int i=0; i<matrix[0].size(); i++)
            for(int j=0; j<matrix.size(); j++)
                vec.push_back(matrix[i][j]);
        sort(vec.begin(),vec.end());
        n = vec[k-1];
        return n;
    }
};
