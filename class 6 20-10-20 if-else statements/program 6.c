/*WAP to enter two dates and print the smallest*/
#include <stdio.h>

int main()
{
	int d1,m1,y1;
	printf("enter date one:");
	scanf("%d%d%d",&d1,&m1,&y1);
	int d2,m2,y2;
	printf("enter date two:");
	scanf("%d%d%d",&d2,&m2,&y2);
	if(y1<y2)
	{
		printf("%d/%d/%d is smaller",d1,m1,y1);
	}
	else if(m1<m2 && y1==y2)
	{
		printf("%d/%d/%d is smaller",d1,m1,y1);
	}
	else if(d1<d2 && m1==m2 && y1==y2)
	{
		printf("%d/%d/%d is smaller",d1,m1,y1);
	}
	else 
	{
		printf("%d/%d/%d is smaller",d2,m2,y2);
	}
	return 0;
}
