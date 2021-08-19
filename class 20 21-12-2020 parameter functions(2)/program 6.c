/*Write a function which will take 3 values and return maximum,minimum
 * and sum of the 3 numbers.*/
#include <stdio.h>

int calc(int a,int b,int c,int *max,int *min){
	*max=a>b?((a>c)?a:c):((b>c)?b:c);
	*min=a<b?((a<c)?a:c):((b<c)?b:c);
	return (a+b+c);
}

int main(){
	int a,b,c,max,min,sum;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	sum=calc(a,b,c,&max,&min);
	printf("the maximum value is:%d\n",max);
	printf("the minimum value is:%d\n",min);
	printf("the sum of the numbers is:%d",sum);
	return 0;
}
