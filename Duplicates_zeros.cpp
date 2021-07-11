class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0;
        vector<int> temp;
        while(i<arr.size())
        {
            temp.push_back(arr[i]);
            if(arr[i] == 0)
                temp.push_back(0);
            i++;
        }
        for(i=0; i<arr.size(); i++)
            arr[i] = temp[i];
    }
};
