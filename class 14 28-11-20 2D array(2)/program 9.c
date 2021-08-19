/*WAP toinput create a maze with 0 and 1 where 0 is the path
 * and 1 is the blockage and ask starting and ending 
 * points to print the correct path of 0s*/
#include <stdio.h>

int main(){
	int x,y,endx,endy,n;
	printf("enter the limit of array:");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("enter an element:");
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("enter the starting coordinate:");
	scanf("%d %d",&x,&y);
	printf("enter the ending coordinate:");
	scanf("%d %d",&endx,&endy);
	printf("%d %d\n",x,y);
	
	int bx=-1,by=-1;
	while(x!=endx || y!=endy){
		if(x-1>=0 && arr[x-1][y]==0 && !(x-1==bx && y==by)){
			bx=x;by=y;
			x=x-1;
		}
		else if(x+1<4 && arr[x+1][y]==0 && !(x+1==bx && y==by)){
			bx=x;by=y;
			x=x+1;
		}
		else if(y-1>=0 && arr[x][y-1]==0 && !(x==bx && y-1==by)){
			bx=x;by=y;
			y=y-1;
		}
		else if(y+1<4 && arr[x][y+1]==0 && !(x==bx && y+1==by)){
			bx=x;by=y;
			y=y+1;
		}
		else{
			continue;
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}
