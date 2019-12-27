#include<stdio.h>
typedef struct size
{
	int a;
	char b;
	char c;
	char d;
	char e;
	char f;
}siz;
typedef struct doub
{
	double a;
	char b;
	char c;
	char d;
	char e;
	char f;
	char g;
	char h;
	char i;
	//char j;
}dob;
int main()
{
	printf("size of int=%ld\n",sizeof(siz));
	printf("size of struct=%ld\n",sizeof(dob));
	return 0;
}

