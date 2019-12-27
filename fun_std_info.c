#include<stdio.h>
#include<string.h>
typedef struct student
{
	int age;
	char name[10];
	char add[10];
	char fname[10];
	long int mono;
}std;
int stud(std x)
{
	printf("name=%s\t%p\n",x.name,&x.name);
	printf("add=%s\t%p\n",x.add,&x.add);
	printf("fname=%s\t%p\n",x.fname,&x.fname);
	printf("age=%d\t%p\n",x.age,&x.age);
	printf("mo.no=%ld\t%p\n",x.mono,&x.mono);
}
int main()
{
	std a;
	printf("enter name=");
	scanf("%s",a.name);
	printf("enter add=");
	scanf("%s",a.add);
	printf("enter father name=");
	scanf("%s",a.fname);
	printf("enter age=");
	scanf("%d",&a.age);
	printf("enter mobile no=");
	scanf("%ld",&a.mono);
	stud(a);
	return 0;
}

