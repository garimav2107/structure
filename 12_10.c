#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct c
{
        char model[500];
        char color[500];
        int milleage;
        float price;
        int discount;
}car;
int *s(car *p);
int main()
{
        car *ptr;
        int i=0;
	ptr=(car*)malloc(10*sizeof(car));
        printf("Enter information:\n");
        for(i=0;i<5;i++)
        {
                 printf("Enter name:\n");
                 scanf("%s",(ptr+i)->model);
                 printf("Enter color\n");
                 scanf("%s",(ptr+i)->color);
                 printf("Enter milleage\n");
                 scanf("%d",&(ptr+i)->milleage);
                 printf("Enter price\n");
                 scanf("%f",&(ptr+i)->price);
                 printf("Enter discount:\n");
                 scanf("%d",&(ptr+i)->discount);
        }
	s(ptr);
	free(ptr);
	return 0;
}
int *s(car *p)
{
	int i;
        for(i=0;i<5;i++)
        {
                 printf("<------------------------------------->\n");
		 printf("model no is:%s\n",(p+i)->model);
                 printf("color is:%s\n",(p+i)->color);
                 printf("mileage is:%d kmpl\n",(p+i)->milleage);
                 printf("price is:%f lakh\n",(p+i)->price);
                 printf("discount price is:%d rupees\n",(p+i)->discount);
        }
}
                                                
