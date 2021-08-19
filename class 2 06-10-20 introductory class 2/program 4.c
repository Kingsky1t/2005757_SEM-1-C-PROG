/*WAP to print the marks of three subject along with its average in 
 * a tabular format.*/
#include <stdio.h>

int main()
{
	int s1,s2,s3;
	float avg;
	printf("enter the marks of the three subjects:");
	scanf("%d%d%d",&s1,&s2,&s3);
	avg=(s1+s2+s3)/3.0;
	printf("\ts1\t%d\n",s1);
	printf("\ts2\t%d\n",s2);
	printf("\ts3\t%d\n",s3);
	printf("----------------------\n");
	printf("\taverage\t%f",avg);
	return 0;
}
