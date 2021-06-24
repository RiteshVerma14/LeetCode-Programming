class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int len = mat[0].size();
        int temp[10][10],k=0,res=0; 
        while(k<=3)
        {
            for(int i=0; i<len; i++)
            {
                for(int j=0; j<len; j++)
                {
                    temp[i][j] = mat[i][j];
                }
            }
            for(int i=0; i<len; i++)
            {
                int k=0;
                for(int j=len-1; j>=0; j--)
                {
                    mat[i][j] = temp[k++][i];
                }
            }
            for(int i=0; i<len; i++)
            {
                for(int j=0; j<len; j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(int i=0; i<len; i++)
            {
                for(int j=0; j<len; j++)
                {
                    if(mat[i][j] == target[i][j])
                    {
                        res++;
                    }
                    else
                    {
                        res = 0;
                        break;
                    }
                }
            }
            if(res == (len*len))
                return true;
            else
                k++;
        }
        return false;
    }
};
