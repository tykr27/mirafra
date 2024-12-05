#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
	int fd,res;
	fd=open("/dev/simple_driver1",O_WRONLY | O_RDONLY);
	if(fd==-1)
	{
		perror("failed to open the driver \n");
		exit(1);
	}
	char buf[10];
	printf("enter the values \n");
	fgets(buf, sizeof(buf), stdin);

    // Remove trailing newline, if any
    buf[strcspn(buf, "\n")] = '\0';
	res=write(fd,buf,strlen(buf));
	if(res==-1)
	{
		perror("failed to write in the file \n");
		exit(1);
	}
	close(fd);
}
