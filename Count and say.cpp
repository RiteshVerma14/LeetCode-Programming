#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        if(n == 2) return "11";
        string s = "11";
        for(int i=3; i<=n; i++)
        {
            string temp = "";
            int c=1;
            for(int j=1; j<s.size()+1; j++)
            {
                if(s[j] != s[j-1])
                {
                    temp += c + '0';
                    cout<<temp<<endl;
	                temp += s[j-1];
					c = 1;
                }
                else
                {
                    c++;
                }
            }
            s = temp;
        }
        return s;
    }
};

int main()
{
	Solution sol;
	cout<<"res = "<<sol.countAndSay(4);
}
