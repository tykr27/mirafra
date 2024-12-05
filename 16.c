#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
int fun(int n1,int n2)
{
	int fd=open("/dev/simple_driver2",O_RDWR);
	if(fd==-1)
	{
		perror("failed top open the file\n");
		exit(1);
	}
	char buf[100];
	snprintf(buf,sizeof(buf),"the value is num1:%d   num2:%d\n",n1,n2);
	int res=write(fd,buf,strlen(buf));
	if(res==-1)
	{
		perror("failed to write in the buffer \n");
		exit(1);
	}
	close(fd);
}
int main()
{
	fun(5,2);
}
