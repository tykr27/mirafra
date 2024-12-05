#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>
#include<pthread.h>
pthread_mutex_t spin;
void *fun1(void *args)
{
	pthread_mutex_lock(&spin);
	FILE *ptr;
	char msg[100];
	ptr=fopen("new1_file","w+");
	if(ptr==NULL)
	{
		perror("failed to create the file \n");
		exit(0);
	}
	int ch;
	while((ch=getchar())!=EOF)
	{
		fputc(ch,ptr);

	}
	printf("\n");
	pthread_mutex_unlock(&spin);
}
void *fun2(void *args)
{
        pthread_mutex_lock(&spin);
        int fd;
        char msg[100];
        fd=open("new1_file",O_CREAT | O_WRONLY,0644);
        if(fd==-1)
        {
                perror("failed to create the file \n");
                exit(0);
        }
	snprintf(msg, sizeof(msg), "FILE: %s\nLINE: %d\nDATE: %s\nTIME: %s\n",
             __FILE__, __LINE__, __DATE__, __TIME__);
	int res=write(fd,msg,strlen(msg));
	if(res==-1)
	{
		perror("failed to write in to the file \n");
		exit(1);
	}
	printf("\n");
	write(1,msg,res);
        pthread_mutex_unlock(&spin);
}
int main()
{
	pthread_mutex_init(&spin,PTHREAD_PROCESS_PRIVATE);
	pthread_t t1,t2;
	int ret=pthread_create(&t1,NULL,fun1,NULL);
	if(ret==-1)
	{
		perror("failed to create the thread 1\n");
		exit(1);
	}
	ret=pthread_create(&t2,NULL,fun2,NULL);
	if(ret==-1)
	{
		perror("failed to create the thead 2\n");
		exit(1);
	}
	ret=pthread_join(t1,NULL);
	if(ret==-1)
	{
		perror("failed to join the thread 1\n");
		exit(1);
	}
	ret=pthread_join(t2,NULL);
	{
		perror("failed to join the thread 2 \n");
		exit(1);
	}
	pthread_mutex_destroy(&spin);

}

