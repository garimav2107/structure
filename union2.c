#include<stdio.h>
typedef struct data
{
	int vol1;
	int vol2;
	int current1;
	int current2;
	char hr;
	char min;
	char sec;
	char date;
}dat;
union value
{
	char a[20];
	dat b;
};
int main()
{
	int i;
	union value c;
	printf("enter voltage1=\n");
	scanf("%x",&c.b.vol1);
	printf("enter voltage2=\n");
	scanf("%x",&c.b.vol2);
	printf("enter current1=");
	scanf("%x",&c.b.current1);
	printf("enter current2");
	scanf("%x",&c.b.current2);
	printf("enter hr=");
	scanf("%hhx",&c.b.hr);
	scanf("%hhx",&c.b.min);
	scanf("%hhx",&c.b.sec);
	scanf("%hhx",&c.b.date);
	printf("--------data--------\n");
	//printf("int=%x\t%p\n",c.a[0],&c.a[0]);
	printf("voltage1=%x\t%p\n",c.b.vol1,&c.b.vol1);
	printf("voltage2=%x\t%p\n",c.b.vol2,&c.b.vol2);
	printf("current1=%x\t%p\n",c.b.current1,&c.b.current1);
	printf("current2=%x\t%p\n",c.b.current2,&c.b.current2);
	printf("hr=%x\t%p\n",c.b.hr,&c.b.hr);
	printf("min=%x\t%p\n",c.b.min,&c.b.min);
	printf("sec=%x\t%p\n",c.b.sec,&c.b.sec);
	printf("date=%x\t%p\n",c.b.date,&c.b.date);
	printf("----------------\n");
	for(i=0;i<20;i++)
	{
		printf("%x\t%p\n",c.a[i],&c.a[i]);
	}
	return 0;
}	

