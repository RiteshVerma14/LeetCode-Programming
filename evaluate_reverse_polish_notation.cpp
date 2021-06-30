#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
	string n[] = {"4","13","5","/","+"};
	int res,j=0;
	int len = sizeof(n)/sizeof(n[0]);
	int H[len];
	for(int i=0; i<len; i++)
	{
		if(n[i] == "+" || n[i] == "-" || n[i] == "*" || n[i] == "/")
		{
			if(n[i] == "+")
			{
				res = H[j-2] + H[j-1];
			}
				
			else if(n[i] == "-")
			{
				res = H[j-2] - H[j-1];
			}
			else if(n[i] == "*")
			{
				res = H[j-2] * H[j-1];
			}
			else if(n[i] == "/")
			{
				res = H[j-2] / H[j-1];
			}
			j = j-2;
			H[j] = res;
			j++;
		}
		else
		{
			H[j] = atoi(n[i]);
		}
		j++;
	}
	cout<<res;
}

