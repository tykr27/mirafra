#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr;
	ptr=fopen("new2_file","w");
	if(ptr==NULL)
	{
		printf("failed to open the file\n");
		exit(1);
	}
	char buf[20];
	int ch;
	while((ch=getchar())!=EOF)
	{
		fputc(ch,ptr);
	}
	fclose(ptr);
}

