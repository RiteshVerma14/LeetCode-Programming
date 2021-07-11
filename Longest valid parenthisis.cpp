#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> a;
        a.push(-1);
        int l=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                a.push(i);
            }
            else
            {
                if(!a.empty())
                {
                    a.pop();
                }
                if(!a.empty())
                {
                	cout<<"I = "<<i<<endl;
                	cout<<"TOP = "<<a.top()<<endl;
                	l = max(l,i-a.top());	
                	cout<<"L = "<<l<<endl;
				}
                else
                    a.push(i);
            }
        }
        return l;
    }
};

int main()
{
	Solution sol;
	cout<<"Result = "<<sol.longestValidParentheses(")()())");
}
