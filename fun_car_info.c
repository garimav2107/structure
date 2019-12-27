#include<stdio.h>
#include<string.h>
typedef struct cars1
{
	int milage;
	char name[10];
	char colour[10];
	int dis;
	int price;
}car;
int car2(car b[5])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("-----------%d.car information---------\n",i);
		printf("car name=%s\t%p\n",b[i].name,&b[i].name);
		printf("car milage=%d\t%p\n",b[i].milage,&b[i].milage);
		printf("car colour=%s\t%p\n",b[i].colour,&b[i].colour);
		printf("car discount=%d\t%p\n",b[i].dis,&b[i].dis);
		printf("car price=%d\t%p\n",b[i].price,&b[i].price);
	}
}
int main()
{
	int i;
	car a[5];
	for(i=0;i<5;i++)
	{
		printf("enter car milage=");
                scanf("%d",&a[i].milage);
                printf("enter name=");
                scanf("%s",a[i].name);
                printf("enter colour=");
                scanf("%s",a[i].colour);
                printf("enter discount=");
                scanf("%d",&a[i].dis);
                printf("enter price=");
                scanf("%d",&a[i].price);
	}
	car2(a);
	return 0;
}


