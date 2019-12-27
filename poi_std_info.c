#include<stdio.h>
#include<string.h>
typedef struct stdudent_info
{
	int age;
	char name[10];
	char fname[10];
	char add[10];
	long int mono;
}std;
int student(std *aptr)
{
	printf("------inf-------\n");
	printf("name=%s\t%p\n",aptr->name,aptr->name);
	printf("age=%d\t%p\n",aptr->age,&aptr->age);
	printf("father name=%s\t%p\n",aptr->fname,aptr->fname);
	printf("add=%s\t%p\n",aptr->add,aptr->add);
	printf("mo.no=%ld\t",aptr->mono);
	printf("%p\n",&aptr->mono);
}
int main()
{
	std a,*ptr;
	ptr=&a;
	printf("enter name=");
	scanf("%s",ptr->name);
	printf("enter age=");
	scanf("%d",&ptr->age);
	printf("enter father name=");
	scanf("%s",ptr->fname);
	printf("enter add=");
	scanf("%s",ptr->add);
	printf("enter mono=");
	scanf("%ld",&ptr->mono);
	printf("ptr=%p\n",ptr);
	printf("------add-----\n");
	printf("%p\n",&ptr->name);
	printf("%p\n",&ptr->age);
	printf("%p\n",&ptr->fname);
	printf("%p\n",&ptr->add);
	printf("%p\n",&ptr->mono);
	printf("-----------\n");
	printf("name=%s\n",a.name);
	printf("age=%d\n",a.age);
	printf("father name=%s\n",a.fname);
	printf("add=%s\n",a.add);
	student(ptr);
	return 0;
}


