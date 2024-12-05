#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int data;
	char name[10];
	int num;
	float a;
	double c;
	int (*fp[2])(struct student *);
}s1;
void display(struct student *s)
{
	printf("The roll number is :%d\n",s->data);
	printf("the name is :%s\n",s->name);
}
int display2(struct student *s){
	return (int)(s->a+s->c);
}
int main()
{
	s1 s;
	s.data=10;
	strcpy(s.name,"yaswanth");
	s.fp[0]=display;
	s.fp[0](&s);
	s.a=20;
	s.c=30;
	s.fp[1]=display2;
	int res=s.fp[1](&s);
	printf("The result is :%d\n",res);
}
