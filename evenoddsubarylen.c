#include<stdio.h>
void main()
{
	int len,i,e=0,j=0,o=0,k=0;
	int a[100],even[100],odd[100],sub[100];
	printf("Enter lenght of array:");
	scanf("%d", &len);
	for(i=0;i<len;i++)
	{
		printf("Enter %d no.:",(i+1));
		scanf("%d", &a[i]);
	}
	for(i=0;i<len;i++)
	{
		if(a[i]%2 == 0)
		{
			e++;
			even[j]=a[i];
			j++;
		}
		else
		{
			o++;
			odd[k]=a[i];
			k++;
		}
	}
	if(e==len || o==len)
	{
		printf("Subarray is : 1");
	}
	else if(e>o)
	{
		j=0;
		for(i=0;i<e;i++)
		{
			sub[j]=even[i];
			j++;
			if(i!=o)
			{
				sub[j]=odd[i];
				j++;
			}
			else
			{
				break;
			}
		}
		printf("Subarray is %d",j);
	}
	else if(e<o)
	{
		j=0;
		for(i=0;i<o;i++)
		{
			sub[j]=odd[i];
			j++;
			if(i!=e)
			{
				sub[j]=even[i];
				j++;
			}
			else
			{
				break;
			}
		}
		printf("Subarray is %d",j);
	}
	else
	{
		printf("Subarray is: %d",len);
	}
}
