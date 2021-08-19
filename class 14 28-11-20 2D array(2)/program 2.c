/*WAP to print a 2D array in the 4 methods as per user choice*/
#include <stdio.h>

int main(){
	int x=1,arr[4][4];
	int ch;int k;
	printf("enter a value between 1-4:");
	scanf("%d",&ch);
	switch(ch){
		case 1:	for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						arr[i][j]=x;
						x+=1;
					}
				}
				for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						printf("%3d ",arr[i][j]);
					}
					printf("\n");
				}
				break;
	
		case 2: for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						arr[j][i]=x;
						x+=1;
					}
				}
				for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						printf("%3d ",arr[i][j]);
					}
					printf("\n");
				}
				break;
				
		case 3: for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						if(i%2==0){
							arr[i][j]=x;
							x+=1;
						}
						else{
							arr[i][3-j]=x;
							x+=1;
						}
					}
				}
				for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						printf("%3d ",arr[i][j]);
					}
					printf("\n");
				}
				break;
				
		case 4: k=0;
				for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						if(k%2==0){
							arr[j][k]=x;
							x+=1;
						}
						else{
							arr[3-j][k]=x;
							x+=1;
						}
					}
					k+=1;
				}
				for(int i=0;i<4;i++){
					for(int j=0;j<4;j++){
						printf("%3d ",arr[i][j]);
					}
					printf("\n");
				}
				break;
				
		default: printf("wrong choice");
	}
	return 0;
}
	
	
