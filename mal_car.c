#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct car1
{
	int millage;
	char name[100];
	char clr[100];
	int price;
	int dis;
}car;
/*int printmelloc(car *aptr)
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("------[%d].car info------\n",i);
		printf("name=%s\t%p\n",(aptr+i)->name,&(aptr+i)->name);
		printf("millage=%d\t%p\n",(aptr+i)->millage,&(aptr+i)->millage);
		printf("colour=%s\t%p\n",(aptr+i)->clr,(aptr+i)->clr);
		printf("price=%d\t%p\n",(aptr+i)->price,&(aptr+i)->price);
		printf("discount=%d\t%p\n",(aptr+i)->dis,&(aptr+i)->dis);
	}
}*/
int main()
{
	int n,i;
	car *ptr;
	ptr=(car*)malloc(10*sizeof(car));
	for(i=1;i<=5;i++)
	{
		printf("--------enter [%d] car info-------\n",i);
		printf("name=");
		scanf("%s",(ptr+i)->name);
		printf("millage=");
		scanf("%d",&(ptr+i)->millage);
		printf("colour=");
		scanf("%s",(ptr+i)->clr);
		printf("price=");
		scanf("%d",&(ptr+i)->price);
		printf("discount=");
		scanf("%d",&(ptr+i)->dis);
	}

	printmelloc(ptr);
	//free(ptr);*/
	return 0;
}



