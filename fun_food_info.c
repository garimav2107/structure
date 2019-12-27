#include<stdio.h>
#include<string.h>
typedef struct food1
{
	int weight;
	int qunt;
	char name[10];
	char col[10];
	char tst[10];
}food;
int food2(food x,food y,food z,food p,food q) 
{
	printf("-------1.food information-------\n");
        printf("food weight=%d\t%p\n",x.weight,&x.weight);
        printf("food quan=%d\t%p\n",x.qunt,&x.qunt);
        printf("food name=%s\t%p\n",x.name,&x.name);
        printf("food colour=%s\t%p\n",x.col,&x.col);
        printf("food teast=%s\t%p\n",x.tst,&x.tst);
	printf("-----------2.food information--------\n");
	printf("food weight=%d\t%p\n",y.weight,&y.weight);
        printf("food quan=%d\t%p\n",y.qunt,&y.qunt);
        printf("food name=%s\t%p\n",y.name,&y.name);
        printf("food colour=%s\t%p\n",y.col,&y.col);
        printf("food teast=%s\t%p\n",y.tst,&y.tst);
	printf("---------3.food information---------\n")
	printf("food weight=%d\t%p\n",z.weight,&z.weight);
        printf("food quan=%d\t%p\n",z.qunt,&z.qunt);
        printf("food name=%s\t%p\n",z.name,&z.name);
        printf("food colour=%s\t%p\n",z.col,&z.col);
        printf("food teast=%s\t%p\n",z.tst,&z.tst);
	printf("---------4.food information--------\n");
	printf("food weight=%d\t%p\n",p.weight,&p.weight);
        printf("food quan=%d\t%p\n",p.qunt,&p.qunt);
        printf("food name=%s\t%p\n",p.name,&p.name);
        printf("food colour=%s\t%p\n",p.col,&p.col);
        printf("food teast=%s\t%p\n",p.tst,&p.tst);
	printf("-----------5.food information----------\n");
	printf("food weight=%d\t%p\n",q.weight,&q.weight);
        printf("food quan=%d\t%p\n",q.qunt,&q.qunt);
        printf("food name=%s\t%p\n",q.name,&q.name);
        printf("food colour=%s\t%p\n",q.col,&q.col);
        printf("food teast=%s\t%p\n",q.tst,&q.tst);
}
int main()
{
	food a,b,c,d,e;
	printf("enter food weight=");
	scanf("%d",&a.weight);
	printf("enter food qunt=");
	scanf("%d",&a.qunt);
	printf("enter food name=");
	scanf("%s",a.name);
	printf("enter colour=");
	scanf("%s",a.col);
	printf("enter teast=");
	scanf("%s",a.tst);
	printf("enter food weight=");
        scanf("%d",&b.weight);
        printf("enter food qunt=");
        scanf("%d",&b.qunt);
        printf("enter food name=");
        scanf("%s",b.name);
        printf("enter colour=");
        scanf("%s",b.col);
        printf("enter teast=");
        scanf("%s",b.tst);
	printf("enter food weight=");
        scanf("%d",&c.weight);
        printf("enter food qunt=");
        scanf("%d",&c.qunt);
        printf("enter food name=");
        scanf("%s",c.name);
        printf("enter colour=");
        scanf("%s",c.col);
        printf("enter teast=");
        scanf("%s",c.tst);
	printf("enter food weight=");
        scanf("%d",&d.weight);
        printf("enter food qunt=");
        scanf("%d",&d.qunt);
        printf("enter food name=");
        scanf("%s",d.name);
        printf("enter colour=");
        scanf("%s",d.col);
        printf("enter teast=");
        scanf("%s",d.tst);
	printf("enter food weight=");
        scanf("%d",&e.weight);
        printf("enter food qunt=");
        scanf("%d",&e.qunt);
        printf("enter food name=");
        scanf("%s",e.name);
        printf("enter colour=");
        scanf("%s",e.col);
        printf("enter teast=");
        scanf("%s",e.tst);
	food2(a,b,c,d,e);
	return 0;
}






