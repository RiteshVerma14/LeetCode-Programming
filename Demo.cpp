#include<bits/stdc++.h>
#include <sstream>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        char max = n[0];
        for(int i=0; i<n.size(); i++)
        {
            if(max < n[i])
            {
                max = n[i];
            }
        }
        int res = (int)max - 48;
        return res;
    }
};

int main()
{
	Solution sol;
	cout<<sol.minPartitions("27346209830709182346");
}


