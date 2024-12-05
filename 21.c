#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{
	int fd,res;
	fd=open("new2_file",O_CREAT |O_WRONLY |O_RDONLY,0666);
	if(fd==-1)
	{
		perror("failed to create the file \n");
		exit(1);
	}
	printf("the file descriptior value is :%d\n");
	char buf[10];
	strcpy(buf,"hello");
	res=write(fd,buf,strlen(buf));
	if(res==-1)
	{
		perror("failed to write \n");
		exit(1);
	}
	write(1,buf,res);
//	write(fd,buf,res);
}
