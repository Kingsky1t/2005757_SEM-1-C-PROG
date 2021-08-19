/*WAP a program to accept and display all data types*/
#include <stdio.h>

int main()
{
	char a;
	printf("enter a character:");
	scanf("%c",&a);
	printf("%c\n",a);
	
	int b;
	printf("enter an integer:");
	scanf("%d",&b);
	printf("%d\n",b);
	
	short int c;
	printf("enter a short integer:");
	scanf("%hd",&c);
	printf("%hd\n",c); 

	long int d;
	printf("enter a long integer:");
	scanf("%ld",&d);
	printf("%ld\n",d);
	
	long long int e;
	printf("enter a long long integer:");
	scanf("%lld",&e);
	printf("%lld\n",e);
	
	float f;
	printf("enter a floating number:");
	scanf("%f",&f);
	printf("%f\n",f);
	
	double g;
	printf("enter a double number:");
	scanf("%lf",&g);
	printf("%lf\n",g);
	
	long double h;
	printf("enter a long double number:");
	scanf("%Lf",&h);
	printf("%Lf\n",h);
	
   	return 0;
}
   	
