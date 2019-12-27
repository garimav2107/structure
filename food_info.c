#include<stdio.h>
#include<string.h>
typedef struct food
{
	char name[10];
	char col[10];
	int wgt;
	char tst[10];
	int qun;
}fd;
int main()
{
	fd a,b,c,d,e;
	printf("enter food name=");
	scanf("%s",a.name);
	printf("enter colour=");
	scanf("%s",a.col);
	printf("enter weight=");
	scanf("%d",&a.wgt);
	printf("enter taste=");
	scanf("%s",a.tst);
	printf("enter quant=");
	scanf("%d",&a.qun);
	printf("enter food name=");
        scanf("%s",b.name);
        printf("enter colour=");
        scanf("%s",b.col);
        printf("enter weight=");
        scanf("%d",&b.wgt);
        printf("enter taste=");
        scanf("%s",b.tst);
        printf("enter quant=");
        scanf("%d",&b.qun);
	printf("enter food name=");
        scanf("%s",c.name);
        printf("enter colour=");
        scanf("%s",c.col);
        printf("enter weight=");
        scanf("%d",&c.wgt);
        printf("enter taste=");
        scanf("%s",c.tst);
        printf("enter quant=");
        scanf("%d",&c.qun);
	printf("enter name=");
	scanf("%s",d.name);
	printf("enter colour=");
	scanf("%s",d.col);
	printf("enter weight=");
	scanf("%d",&d.wgt);
	printf("enter taste=");
        scanf("%s",d.tst);
        printf("enter quant=");
        scanf("%d",&d.qun);
	printf("enter name=");
        scanf("%s",e.name);
        printf("enter colour=");
        scanf("%s",e.col);
        printf("enter weight=");
        scanf("%d",&e.wgt);
        printf("enter taste=");
        scanf("%s",e.tst);
        printf("enter quant=");
        scanf("%d",&e.qun);
	printf("--------food information--------\n");
	printf("name=%s\tclr=%s\twgt=%d\ttst=%s\tqun=%d\n",a.name,a.col,a.wgt,a.tst,a.qun);
	printf("name=%s\tclr=%s\twgt=%d\ttst=%s\tqun=%d\n",b.name,b.col,b.wgt,b.tst,b.qun);
	printf("name=%s\tclr=%s\twgt=%d\ttst=%s\tqun=%d\n",c.name,c.col,c.wgt,c.tst,c.qun);
	printf("name=%s\tclr=%s\twgt=%d\ttst=%s\tqun=%d\n",d.name,d.col,d.wgt,d.tst,d.qun);
	printf("name=%s\tclr=%s\twgt=%d\ttst=%s\tqun=%d\n",e.name,e.col,e.wgt,e.tst,e.qun);
	printf("----------add-----------\n");
	printf("name=%p\tclr=%p\twgt=%p\ttst=%p\tqun=%p\n",&a.name,&a.col,&a.wgt,&a.tst,&a.qun);
        printf("name=%p\tclr=%p\twgt=%p\ttst=%p\tqun=%p\n",&b.name,&b.col,&b.wgt,&b.tst,&b.qun);
        printf("name=%p\tclr=%p\twgt=%p\ttst=%p\tqun=%p\n",&c.name,&c.col,&c.wgt,&c.tst,&c.qun);
        printf("name=%p\tclr=%p\twgt=%p\ttst=%p\tqun=%p\n",&d.name,&d.col,&d.wgt,&d.tst,&d.qun);
        printf("name=%p\tclr=%p\twgt=%p\ttst=%p\tqun=%p\n",&e.name,&e.col,&e.wgt,&e.tst,&e.qun);
	return 0;
}





