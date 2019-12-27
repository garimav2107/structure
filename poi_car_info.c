#include<stdio.h>
#include<string.h>
typedef struct cars1
{
	char name[10];
	int price;
	int dis;
	int milage;
	char clr[10];
}car;
int cars(car *aptr)
{
	car b[5];
	int j;
	for(j=0;j<5;j++)
	{
		printf("---------[%d].information------\n",j);
		printf("name=%s\t%p\n",aptr->name,aptr->name);
		printf("price=%d\t%p\n",aptr->price,&aptr->price);
		printf("discount=%d\t%p\n",aptr->dis,&aptr->dis);
		printf("milage=%d\t%p\n",aptr->milage,&aptr->milage);
		printf("colour=%s\t%p\n",aptr->clr,aptr->clr);
		aptr++;
	}
}
int main()
{
	car a[5],*ptr;
	ptr=&a[0];
	int i;
	for(i=0;i<5;i++)
	{
		printf("------[%d].car information-----\n",i);
		printf("enter car name=");
		scanf("%s",ptr->name);
		printf("enter price=");
		scanf("%d",&ptr->price);
		printf("enter dis=");
		scanf("%d",&ptr->dis);
		printf("enter milage=");
		scanf("%d",&ptr->milage);
		printf("enter clour=");
		scanf("%s",ptr->clr);
		ptr++;
	}
	ptr=&a[0];
	cars(ptr);
	return 0;
}


