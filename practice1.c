#include<stdio.h>
int main()
{
	int a=12300450;
	int arr[30];
	int i=0;
	while(a)
	{
		arr[i]=a%10;
		a=a/10;
		i++;
	}
	int k=0;
	printf("the array elements are \n");
	for(int j=0;j<i/2;j++)
	{
		int temp=arr[j];
		arr[j]=arr[i-j-1];
		arr[i-j-1]=temp;
	}
	printf("\n");
	for(int j=0;j<i;j++)
	{
		printf("%d\t",arr[j]);
	}
	for(int j=0;j<i;j++)
	{
		if(arr[j]!=0)
		{
			arr[k]=arr[j];
			k++;
		}
	}
	for(int j=k;j<i;j++)
	{
		arr[j]=0;
	}printf("\n");
	printf("elements after changing is\n");
	for(int j=0;j<i;j++)
	{
		printf("%d\t",arr[j]);
	}



}
