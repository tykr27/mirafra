#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd,res;
	char buf[20];
	strcpy(buf,"hello yaswanth");
	fd=open("new1_file",O_CREAT | O_WRONLY);
	if(fd==-1)
	{
		perror("failed to open the file \n");
		exit(1);
	}
	res=write(fd,buf,strlen(buf));
	if(res==-1)
	{
		perror("failed to write \n");
		exit(1);
	}
	write(1,buf,res);
}
