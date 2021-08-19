/*WAP to input price of three items and give discount accordingly
	total		total discount
	>5000			20%
	>3000			10%
	>1000			5%
*/
#include <stdio.h>

int main()
{
	float a,b,c,tot,dis;
	printf("Enter the price of three items:");
	scanf("%f%f%f",&a,&b,&c);
	tot=a+b+c;
	printf("total billing:%f\n",tot);
	if(tot>5000)
	{
		dis=tot*0.2;
		printf("discount awarded:%f\n",dis);
	}
	else if(tot>3000)
	{	
		dis=tot*0.1;	
		printf("discount awarded:%f\n",dis);
	}
	else if(tot>1000)
	{
		dis=tot*0.05;	
		printf("discount awarded:%f\n",dis);
	}
	else
	{
		printf("no discount awarded");
	}
	return 0;
}			
