#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student1
{
	char name[];
	char add[];
	char fname[];
	int age;
	long int mono;
}std;
int printmallocst(std *aptr)
{
	printf("-------std_info---------\n");
	printf("name=%s\n%p\n",aptr->name,aptr->name);
	printf("add=%s\n%p\n",aptr->add,aptr->add);
	printf("father name=%s\n%p\n",aptr->fname,aptr->fname);
	printf("age=%d\n%p\n",aptr->age,&aptr->age);
	printf("mo.no=%ld\n%p\n",aptr->mono,&aptr->mono);
}
int main()
{
	int n;
	std *ptr;
	printf("size=");
	scanf("%d",&n);
	ptr=(std*)malloc(n*sizeof(std));
	printf("student name=");
	scanf("%s",ptr->name);
	printf("add=");
	scanf("%s",ptr->add);
	printf("father name=");
	scanf("%s",ptr->fname);
	printf("enter age=");
	scanf("%d",&ptr->age);
	printf("enter mono=");
	scanf("%ld",&ptr->mono);
	printmallocst(ptr);
	return 0;
}


