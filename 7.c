#include<stdio.h>
#include<stdlib.h>
int fun(int arr[],int n)
{
	printf("Enter the array elements \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
typedef int (*fp)(int,int);
int assending(int a,int b)
{
	return a-b;
}
int decending(int a,int b)
{
	return b=(b-a);
}
int sort(int arr[],int n, fp call)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(call(arr[j],arr[j+1])>0)
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("Enter the no of elements \n");
	scanf("%d",&n);
	int arr[n];
	fun(arr,n);
	printf("the elements in assending order is \n");
	sort(arr,n,assending);
	print(arr,n);
	printf("elements in decending is \n");
	sort(arr,n,decending);
	print(arr,n);
}




