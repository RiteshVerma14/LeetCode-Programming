#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        if(pos>-1)
        {
        	return pos;
		}
		else
		{
			return -1;
		}
    }
};
int main()
{
	Solution sol;
	int ind = sol.strStr("ritesh", "es");
	cout<<"Index is "<<ind;
}
