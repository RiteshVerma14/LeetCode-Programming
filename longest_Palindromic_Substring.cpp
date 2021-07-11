#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s)  {
        if(s.size() == 1)
            return s;
        string n="",f="";
        int c=0;
        for(int i=0; i<s.length(); i++)
        {
            for(int j=i; j<s.length(); j++)
            {
                n = n + s[j];
                if(palindrom(n))    
					if(n.size() > f.size())     
						f = n;
            }
            n="";
        }
        return f;
    }
    
    int palindrom(string n)
    {
        string a = n;
        reverse(n.begin(), n.end());
        if(a == n)
            return 1;
        return 0;
    }
};

int main()
{
	Solution sol;
	string s = "jrjnbctoqgzimtoklkxcknwmhiztomaofwwzjnhrijwkgmwwuazcowskjhitejnvtblqyepxispasrgvgzqlvrmvhxusiqqzzibcyhpnruhrgbzsmlsuacwptmzxuewnjzmwxbdzqyvsjzxiecsnkdibudtvthzlizralpaowsbakzconeuwwpsqynaxqmgngzpovauxsqgypinywwtmekzhhlzaeatbzryreuttgwfqmmpeywtvpssznkwhzuqewuqtfuflttjcxrhwexvtxjihunpywerkktbvlsyomkxuwrqqmbmzjbfytdddnkasmdyukawrzrnhdmaefzltddipcrhuchvdcoegamlfifzistnplqabtazunlelslicrkuuhosoyduhootlwsbtxautewkvnvlbtixkmxhngidxecehslqjpcdrtlqswmyghmwlttjecvbueswsixoxmymcepbmuwtzanmvujmalyghzkvtoxynyusbpzpolaplsgrunpfgdbbtvtkahqmmlbxzcfznvhxsiytlsxmmtqiudyjlnbkzvtbqdsknsrknsykqzucevgmmcoanilsyyklpbxqosoquolvytefhvozwtwcrmbnyijbammlzrgalrymyfpysbqpjwzirsfknnyseiujadovngogvptphuyzkrwgjqwdhtvgxnmxuheofplizpxijfytfabx";
	cout<<"Result is: "<<sol.longestPalindrome(s); 
}
