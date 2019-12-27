#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct food1
{
	char name[10];
	char clr[10];
	char tst[10];
	int qun;
	int wgt;
}food;
int printmalloc(food *aptr,food *bptr,food *cptr,food *dptr,food *eptr)
{
	printf("----1.food info----\n");
	printf("name=%s\n",aptr->name);
	printf("colour=%s\n",aptr->clr);
	printf("teast=%s\n",aptr->tst);
	printf("quan=%d\n",aptr->qun);
	printf("weight=%d\n",aptr->wgt);
	printf("----2.food info----\n");
        printf("name=%s\n",bptr->name);
        printf("colour=%s\n",bptr->clr);
        printf("teast=%s\n",bptr->tst);
        printf("quan=%d\n",bptr->qun);
        printf("weight=%d\n",bptr->wgt);
	printf("----3.food info----\n");
	printf("name=%s\n",cptr->name);
	printf("colour=%s\n",cptr->clr);
	printf("teast=%s\n",cptr->tst);
	printf("quan=%d\n",cptr->qun);
	printf("wgt=%d",cptr->wgt);
	printf("----4.food info----\n");
        printf("name=%s\n",dptr->name);
        printf("colour=%s\n",dptr->clr);
        printf("teast=%s\n",dptr->tst);
        printf("quan=%d\n",dptr->qun);
        printf("weight=%d\n",dptr->wgt);
	printf("----5.food info----\n");
        printf("name=%s\n",eptr->name);
        printf("colour=%s\n",eptr->clr);
        printf("teast=%s\n",eptr->tst);
        printf("quan=%d\n",eptr->qun);
        printf("weight=%d\n",eptr->wgt);
}
int main()
{
	int n;
	food *ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
	printf("enter size=");
	scanf("%d",&n);
	ptr1=(food*)malloc(n*sizeof(food));
	ptr2=(food*)malloc(n*sizeof(food));
	ptr3=(food*)malloc(n*sizeof(food));
	ptr4=(food*)malloc(n*sizeof(food));
	ptr5=(food*)malloc(n*sizeof(food));
	printf("-----enter 1st food info------\n");
	printf("enter name=");
	scanf("%s",ptr1->name);
	printf("enter colour=");
	scanf("%s",ptr1->clr);
	printf("enter teast=");
	scanf("%s",ptr1->tst);
	printf("enter quant=");
	scanf("%d",&ptr1->qun);
	printf("enter weight=");
	scanf("%d",&ptr1->wgt);
	printf("-----enter 2nd food info------\n");
        printf("enter name=");
        scanf("%s",ptr2->name);
        printf("enter colour=");
        scanf("%s",ptr2->clr);
        printf("enter tst=");
        scanf("%s",ptr2->tst);
        printf("enter quant=");
        scanf("%d",&ptr2->qun);
        printf("enter weight=");
        scanf("%d",&ptr2->wgt);
	printf("-----enter 3rd food info------\n");
        printf("enter name=");
        scanf("%s",ptr3->name);
        printf("enter colour=");
        scanf("%s",ptr3->clr);
        printf("enter tst=");
        scanf("%s",ptr3->tst);
        printf("enter quant=");
        scanf("%d",&ptr3->qun);
        printf("enter weight=");
        scanf("%d",&ptr3->wgt);
	printf("-----enter 4th food info------\n");
        printf("enter name=");
        scanf("%s",ptr4->name);
        printf("enter colour=");
        scanf("%s",ptr4->clr);
        printf("enter tst=");
        scanf("%s",ptr4->tst);
        printf("enter quant=");
        scanf("%d",&ptr4->qun);
        printf("enter weight=");
        scanf("%d",&ptr4->wgt);
	printf("-----enter 5th food info------\n");
        printf("enter name=");
        scanf("%s",ptr5->name);
        printf("enter colour=");
        scanf("%s",ptr5->clr);
        printf("enter tst=");
        scanf("%s",ptr5->tst);
        printf("enter quant=");
        scanf("%d",&ptr5->qun);
        printf("enter weight=");
        scanf("%d",&ptr5->wgt);
	printmalloc(ptr1,ptr2,ptr3,ptr4,ptr5);
	return 0;
}






