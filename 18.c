#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
int main()
{
	int fd;
	char msg[200];
	fd=open("/dev/log_driver1", O_RDWR);
	if(fd==-1)
	{
		perror("failed to open the driver \n");
		exit(1);
	}
	snprintf(msg, sizeof(msg), "FILE: %s\nLINE: %d\nDATE: %s\nTIME: %s\n",
             __FILE__, __LINE__, __DATE__, __TIME__);
	int res=write(fd,msg,strlen(msg));
	if(res==-1)
	{
		perror("failed to write in to the file \n");
		exit(1);
	}
	write(1,msg,res);
	close(fd);
}
