#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int a,b;
	int (*fp)(int ,int );
}s;
int add(int a,int b)
{
	return a+b;
}
int main()
{
	s s1;
	printf("Entet thre values\n");
	scanf("%d %d",&s1.a,&s1.b);
	s1.fp=add;
	int res=s1.fp(s1.a,s1.b);
	printf("the resultant is :%d\n",res);
}

