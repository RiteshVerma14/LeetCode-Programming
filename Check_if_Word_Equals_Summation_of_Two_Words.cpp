#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
	    bool isSumEqual(string firstWord, string secondWord, string targetWord) 
		{
	        int len1 = firstWord.size(), len2 = secondWord.size(), len3 = targetWord.size(),n1=0,n2=0,n3=0;
	        for(int i=0; i<len1; i++)
	            n1 = n1*10 + (firstWord[i]-97);
	        for(int i=0; i<len2; i++)
	            n2 = n2*10 + (secondWord[i]-97);
	        for(int i=0; i<len3; i++)
	            n3 = n3*10 + (targetWord[i]-97);
	        if((n1+n2) == n3)
	        	return true;
	        return false;
	    }
};

int main()
{
	Solution sol;
	string w1,w2,w3;
	cout<<"Enter 1st word: ";
	cin>>w1;
	cout<<"Enter 2nd word: ";
	cin>>w2;
	cout<<"Enter 3rd word: ";
	cin>>w3;
	cout<<"Result is: "<<sol.isSumEqual(w1,w2,w3);
}
