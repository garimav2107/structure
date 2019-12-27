#include<stdio.h>
int main()
{
	int a=0x11223344,i;
	char b[5],*ptr;
	b[0]=(char)a;
	ptr=&b;
	for(i=0;i<4;i++)
	{
		printf("%x",*ptr);
		ptr++;
	}
	return 0;
}
