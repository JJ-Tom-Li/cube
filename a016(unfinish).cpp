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
	
	for (i=0;i<9;i++){        //確認橫列sum=45 
		for (j=0;j<9;j++){
			sum=sum+n[i][j];
		}
		if (sum!=45){
			sum=0;
			break;
		}
		else if (i==8&&sum==45){
			check++;
		}
		sum=0;
	}
	
	for (i=0;i<9;i++){      //確認直列sum=45
		for (j=0;j<9;j++){
			sum=sum+n[j][i];
		}
		if (sum!=45){
			sum=0;
			break;
		}
		else if (i==8&&sum==45){
			check++;
		}
		sum=0;
	}
	
	int count=1,start1=0,start2=0;
	for (i=start1;i<=start1+2&&i<9;i++){    //確認9宮格sum=45
		for (j=start2;j<=start2+2&&j<9;j++){
			sum=sum+n[i][j]; 
		}
		if (i==start1+2&&sum!=45){
			sum=0;
			break; 
		}
		if (i==start1+2){
			start1+=3;
			count++; 
		}
		if (count==3){
			start2+=3;
			count=1; 
		}
		if (i==8&&count==3&&sum==45){
			check++; 
		}
		sum=0; 
	} 
	
	
	if (check==3){
		printf("yes\n");
	}
	else
		printf("no\n"); 
	
	
	
}








	return 0;
}


