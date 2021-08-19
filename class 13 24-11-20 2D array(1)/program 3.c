/*WAP to display the sum of each row and column*/
#include <stdio.h>

int  main(){
	int m,n;
	printf("enter the no. of rows and columns:");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter the element:");
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=arr[i][j];
		}
		printf("sum of the row no %d is %d\n",i,sum);
		sum=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=arr[j][i];
		}
		printf("sum of the column no %d is %d\n",i+1,sum);
		sum=0;
	}
	return 0;
}
