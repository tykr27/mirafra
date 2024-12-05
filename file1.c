#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr;
	int ch;
	int count=0;
	ptr=fopen("file1.c","r");
	if(ptr==NULL)
	{
		printf("failed to open the file \n");
		exit(0);
	}
	while((ch=fgetc(ptr))!=EOF)
	{
		count++;
		printf("%c",ch);
	}
	printf("the count is :%d\n",count);
	close(ptr);
}
