/*WAP to enter the values of m and n and compute 
 * m*n through addition procedure.*/
#include <stdio.h>

int main(){
	int m,n;
	printf("enter the values of m and n:");
	scanf("%d%d",&m,&n);
	int ans=0;
	for(int i=1;i<=n;i++){
			ans+=m;
	}
	printf("the value of m*n is %d",ans);
	return 0;
}
