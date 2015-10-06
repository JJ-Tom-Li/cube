#include <stdio.h>
#include <stdlib.h>
int main(){
	int n[9][9],i,j,check=0,sum=0;
while (scanf("%d",&n[0][0])!=EOF){
	for (i=1;i<9;i++){
		scanf("%d",&n[0][i]);
	}
	for (i=1;i<9;i++){
		for (j=0;j<9;j++){
			scanf("%d",&n[i][j]);
		}
	} 
	
	for (i=0;i<9;i++){      //確認橫列sum=9
		for (j=0;j<9;j++){
			sum=sum+n[i][j];
		}
		if (sum!=9){
			sum=0;
			break;
		}
		else if (i==8&&sum==9){
			check++;
		}
		sum=0;
	}
	
	for (i=0;i<9;i++){      ////確認直列sum=9
		for (j=0;j<9;j++){
			sum=sum+n[j][i];
		}
		if (sum!=9){
			sum=0;
			break;
		}
		else if (i==8&&sum==9){
			check++;
		}
		sum=0;
	}
	
	
	
}








	return 0;
}
