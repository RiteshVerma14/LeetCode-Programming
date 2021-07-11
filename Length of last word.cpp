#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
    	int c=0;
        for(int i=0; i<s.length(); i++)
        {
        	if(s[i] == ' ')
        	{
        		c=1;
			}
			else
			{
				c++;
			}
		}
		return c;
    }
};

int main()
{
	Solution sol;
	int len = sol.lengthOfLastWord("");
	cout<<"Length of last word is "<<len;
}
