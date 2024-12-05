#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int a,b;
//passing the array of function pointer 
	int (*fp[4])(int,int);
}s1;
typedef enum 
{
	// passing enum variables
	add1,sub1,mul1
};
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
int main()
{
	// creating the structure varaible
	s1 s;
	// passing enum index values to function pointer to acess that particular function
	s.fp[0]=add;
	s.fp[1]=sub;
	s.fp[2]=mul;
	printf("Enter the a and b values \n");
	// reading the structure member inputs from the user
	scanf("%d %d",&s.a,&s.b);
	//s.fp[0]=add;
	//storing the result in a variable
	int res=s.fp[0](s.a,s.b);
	printf("the resulatant is :%d\n",res);
	s.fp[1]=sub;
        res=s.fp[1](s.a,s.b);
        printf("the resulatant is :%d\n",res);
	s.fp[2]=mul;
        res=s.fp[2](s.a,s.b);
        printf("the resulatant is :%d\n",res);
}
