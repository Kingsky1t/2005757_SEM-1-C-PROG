/*WAP a program to input 3 numbers and find the smallest
 among them using if else statements*/
 #include <stdio.h>
 
 int main()
 {
 	int a,b,c;
 	printf("enter three numbers:");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a<b && a<c)
 	{
 		printf("%d is the smallest number",a);
 	}
 	else if(b<a && b<c)
 	{
 		printf("%d is the smallest number",b);
 	}
 	else
 	{
 		printf("%d is the smallest number",c);
 	}
 	return 0;
 }
