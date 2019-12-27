#include<stdio.h>
#include<string.h>
typedef struct student
{
	char name[10];
	char add[10];
	int age;
	long int mono;
	char fname[5];
}std;
int main()
{
	std a;
	//ptr=&a;
	printf("enter name=");
	scanf("%s",a.name);
	printf("enter add=");
	scanf("%s",a.add);
	printf("enter age=");
	scanf("%d",&a.age);
	printf("enter mo.no=");
	scanf("%ld",&a.mono);
	printf("enter father name=");
	scanf("%s",a.fname);
	printf("/// student information ///\n");
	printf("name=%s\t%p\n",a.name,&a.name);
	printf("add=%s\t%p\n",a.add,&a.add);
	printf("age=%d\t%p\n",a.age,&a.age);
	printf("mo. no.=%ld\t%p\n",a.mono,&a.mono);
	printf("father name=%s\t%p\n",a.fname,&a.fname);
	return 0;
}




