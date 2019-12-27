#include<stdio.h>
#include<string.h>
typedef struct cars
{
	char name[10];
	char clr[10];
	int milg;
	int dis;
	int pri;
}car;
int main()
{
	car a[5];
	int i;
	for(i=0;i<=5;i++)
	{
		printf("enter car name=");
		scanf("%s",a[i].name);
		printf("enter colour=");
		scanf("%s",a[i].clr);
		printf("enter milage=");
		scanf("%d",&a[i].milg);
		printf("enter discount=");
		scanf("%d",&a[i].dis);
		printf("enter price=");
		scanf("%d",&a[i].pri);
	}
	for(i=1;i<=5;i++)
	{
		printf("name=%s\tclr=%s\tmil=%d\tdis=%d\tpri=%d\n",a[i].name,a[i].clr,a[i].milg,a[i].dis,a[i].pri);
		printf("%p\t%p\t%p\t%p\t%p\n",&a[i].name,&a[i].clr,&a[i].milg,&a[i].dis,&a[i].pri);
	}
	return 0;
}




