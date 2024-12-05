#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	struct stat buf;
	stat("new1_file",&buf);
	printf("permisssion before using chmod %o\n",buf.st_mode &0777);
	if(chmod("new1_file",0777)==-1)
	{
		printf("permission denined \n");
		exit(1);
	}
	stat("new1_file",&buf);
	printf("permission after changing is:%o \n",buf.st_mode & 0777);
	return 0;
}



