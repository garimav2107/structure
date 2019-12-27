#include<stdio.h>
typedef struct value
{
	char a;
	char b;
	char c;
	char d;
}val;
union value1
{
	int e;
	val f;
};
int main()
{
	union value1 g;
	g.e=0x11223344;
	printf("value=%x\t%p\n",g.e,&g.e);
	printf("%x\ta=%p\n",g.f.a,&g.f.a);
	printf("%x\tb=%p\n",g.f.b,&g.f.b);
	printf("%x\tc=%p\n",g.f.c,&g.f.c);
	printf("%x\td=%p\n",g.f.d,&g.f.d);
	return 0;
}


