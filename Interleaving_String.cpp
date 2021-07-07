#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	    bool isInterleave(string s1, string s2, string s3) 
		{
	        int len1 = s1.size(), len2 = s2.size(), len3 = s3.size(),i = 0,a = 0, b = 0, c = 0;
	        if((len1+len2) != len3)
	            return false;
	        bool res[len1+1][len2+1];
	        for(int i=0; i < len1+1; i++)
	            for(int j=0; j < len2+1; j++)
				{
	                if(i==0 and j==0)
	                    res[i][j] = true;
	                else if(i == 0)
	                    res[i][j] = ( res[i][j-1] and s2[j-1] == s3[i+j-1]);
	                else if(j == 0)
	                    res[i][j] = ( res[i-1][j] and s1[i-1] == s3[i+j-1]);
	                else
	                    res[i][j] = (res[i-1][j] and s1[i-1] == s3[i+j-1] ) or (res[i][j-1] and s2[j-1] == s3[i+j-1] );
	            }
	        return res[len1][len2];
	    }
};

int main()
{
	Solution sol;
	string s1,s2,s3;
	cout<<"Enter 1st string : ";
	cin>>s1;
	cout<<"Enter 2nd string : ";
	cin>>s2;
	cout<<"Enter 3rd string : ";
	cin>>s3;
	cout<<"Result is : "<<sol.isInterleave(s1,s2,s3);
}
