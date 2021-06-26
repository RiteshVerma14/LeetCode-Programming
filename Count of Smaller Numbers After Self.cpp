class Solution {
public:
    void update(int ind,vector<int>& BIT){
        while(ind<=BIT.size()){
            BIT[ind]++;
            ind += ind & -ind;
        }
    }
    int answer(int ind,vector<int>& BIT){
        int ans = 0;
        while(ind>0){
            ans+=BIT[ind];
            ind -= ind & -ind;
        }
        return ans;
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        vector<int> BIT(20005,0);
        for(int i=0;i<nums.size();i++){
            nums[i]+=10001;
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i] = answer(nums[i]-1,BIT);
            update(nums[i],BIT);
        }
        return ans;
    }
};
