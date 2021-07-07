#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        set<string> curr = {""}, nxt;
        int i;
        while (n--) 
        {
            for (string s : curr) 
            {
                nxt.insert("()" + s);
                i = s.size();
                while (i--) 
                    if (s[i] == '(') nxt.insert(s.substr(0, i + 1) + "()" + s.substr(i + 1, 99));
            }
            swap(curr, nxt);
            nxt.clear();
        }
        return vector<string>(begin(curr), end(curr));
    }
};

int main()
{
	Solution sol;
	int n;
	cout<<"Enter a number to Generate Parentheses : ";
	cin>>n;
	vector<string> vec;
	vec = sol.generateParenthesis(n);
	for(int i=0; i<vec.size(); i++)
		cout<<vec[i]<<"\t";
}
