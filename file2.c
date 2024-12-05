#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int fd;
	char buf[300];
	fd=open("file2.c",O_RDONLY);
	if(fd==-1)
	{
		printf("failed to open the file \n");
		exit(EXIT_SUCCESS);
	}
	read(fd,buf,sizeof(buf));
	printf("the information in the file is :%s\n",buf);
	close(fd);
}

