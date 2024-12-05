#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int division(int a,int b){
	return a/b;
}
typedef int (*ftp)(int ,int);
// int (*ftp)(int, int)
// if we are not using the function pointer we need call the value as
// int cal(int a, int b, int (*ftp)(int ,int)
// return ftp(a,b);
int cal(int a,int b, ftp call)
{
	return call(a,b);
}

int main()
{
	printf("the resultant value is :%d\n",cal(10,20,add));
}
