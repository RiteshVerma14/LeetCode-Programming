#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int* H = new int[nums.size()];
        int i, j;
        if (nums.size() == 0 || nums[0] == 0)
            return 0;
        H[0] = 0;
        for (i = 1; i < nums.size(); i++) 
        {
            H[i] = INT_MAX;
            for (j = 0; j < i; j++) 
            {
                if (i <= j + nums[j] && H[j] != INT_MAX) {
                    H[i] = min(H[i], H[j] + 1);
                    break;
                }
            }
        }
        return H[nums.size() - 1];
    }
};

int main()
{
	Solution sol;
	int arr[] = {2,3,1,1,4};
	cout<<sol.jump(arr);
}
