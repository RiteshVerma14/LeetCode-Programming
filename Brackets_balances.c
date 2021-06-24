#include<stdio.h>
#include<string.h>
void main()
{
	int i,l=0,r=0,lr=0,len;
	char s[1000];
	printf("Enter a String in form of () :");
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]=='(')
		{
			l++;
		}
		else if(s[i]==')')
		{
			r++;
		}
		else if(s[i]==' ')
		{
			continue;
		}
		else
		{
			lr++;
			break;
		}
	}
	if(l==r && lr==0)
	{
		printf("Balanced, Total () are : %d", l);
	}
	else
	{
		printf("Not Balanced.");
	}
}
