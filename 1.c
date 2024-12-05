#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a/b;
}
int main()
{
	int a,b,res;
	int (*fun)(int,int);
	int n;
	while(1)
	{
		printf("Enter the a and b values \n");
		scanf("%d %d ",&a,&b);
		printf("Enter 1 for add function \n");
		printf("Enter 2 for subtraction \n");
		printf("Enter 3 for multiplication\n");
		printf("Enter 4 for division \n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:fun=add;
			       res=fun(a,b);
			       printf("The addition of two numbers is: %d\n",res);
			       break;
			case 2:fun=sub;
			       res=fun(a,b);
			       printf("The subtraction of two numbers is :%d\n",res);
			       break;
			case 3:fun=mul;
			       res=fun(a,b);
			       printf("The multiplied value is:%d\n",res);
			       break;
			case 4:fun=division;
			res=fun(a,b);
			       printf("The division value is :%d\n",res);
			       break;
			default:printf("invalid case \n");
				break;
		}
	}
}
