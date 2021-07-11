#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> que;
        que.push({nums[0],0});
        vector<int> vec;
        vec.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            while(!(i-que.top().second <= k))
                que.pop();
            int c = que.top().first+nums[i];
            que.push({c,i});
            vec.push_back(c);
        }
        return vec[vec.size()-1];
    }
};

int main()
{
	Solution sol;
	vector<int> vec = {1,-1,-2,4,-7,3};
	int k = 2;
	cout<<"Result is : "<<sol.maxResult(vec,k);
}
