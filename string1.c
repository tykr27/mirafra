#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[]="yasw324r5tanth kumar reddy ";
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(isalpha(str[i]))
		{
			printf("%c",str[i]);
		}
	}
}
