#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct student
{
	int a;
	int(*fp[3])(int);
}s1;
int fact(int a)
{
	// checking the condition
	if(a <= 1)
	{
		return 1;
	}
	else
	{
		// calling the recurrsive condition
		return a*fact(a-1);
	}
}
int power(int a)
{
	if(a ==0)
	{
		return 1;
	}
	// calling recurrsive condition
	return(int)round( a*power(a-1));
}
int fib(int a)
{
	// checking the two conditions
	if(a ==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
	//	printf("%d   \t",a);
		return fib(a-1)+fib(a-2);
	}
}
int main()
{
	// typecasting the structure
	s1 s;
	// passing the array function pointer
	//int (*fp[3])(int);
	int n;
	printf("Enter the a value \n");
	// passing the a value
	scanf("%d",&s.a);
	printf("Enter 1 for factorial \n");
	printf("Enter 2 for fibonacci \n");
	printf("Enter 3 for power \n");
	scanf("%d",&n);
	switch(n)
	{
		// selecting the options for output
		case 1:s.fp[0]=fact;
		       printf("the result is :%d\n",s.fp[0](s.a));
		       break;
		case 2:s.fp[1]=fib;
		       printf("the result is :%d \n",s.fp[1](s.a));
		       break;
		case 3:s.fp[2]=power;
		       printf("the result is :%d\n",s.fp[2](s.a));
		       break;
		default:printf("invalid test case \n");
			break;
	}
}

