#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        int c=1,m=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]+1 == nums[i+1]) c++;
            else if(nums[i] == nums[i+1]) continue;
            else
            {
                m = max(m,c);
                c=1;
            }
        }
        m = max(m,c);
        return m;
    }
};

int main()
{
	Solution sol;
	vector<int> vec = {100,4,200,1,3,2};
	cout<<"Result is : "<<sol.longestConsecutive(vec);
}
