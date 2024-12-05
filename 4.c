#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd;
	char buf[100];
	fd=open("1.txt",O_CREAT | 0666);
	if(fd==-1)
	{
		perror("failed to open the file\n");
		exit(1);
	}
	int ret=open(fd,buf,strlen(buf));
	if(ret==-1)
	{
		perror("failed to read from the file\n");
		exit(1);
	}
	printf("the message in the buf is:%s\n",buf);
}

