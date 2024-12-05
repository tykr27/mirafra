#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef double (*fp)(double);
int fun(double arr[],int n)
{
	printf("Enter the array elements \n");
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
	}
}
double squrt(double a)
{
	return (a*a);
}
double cburt(double a)
{
	return (a*a*a);
}
int cal(double arr[],int n,fp call)
{
	for(int i=0;i<n;i++)
	{
		arr[i]=	call(arr[i]);
	}
}
void print(double arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%lf\t",arr[i]);
	}
	printf("\n");
}

int main()
{
	printf("Enter the no of array elements \n");
	int n;
	scanf("%d",&n);
	double arr[n];
	fun(arr,n);
	printf("elements after suare root is \n");
	cal(arr,n,squrt);
	print(arr,n);
	printf("Elements after the cube root is \n");
	cal(arr,n,cburt);
	print(arr,n);
}
	

