#include <stdio.h>
#include <stdlib.h>

int i,j;   //i,j為迴圈用整數
int prime[30000]={0,2,3,5,7};  //已知2，3，5，7為質數，0無作用 
int x=4;    //x為目前已知質數數量 

int check_prime(int);
void build_prime();    
int main(){

	int n;   //n為輸入的整數
	build_prime();    //建立質數表 
while (scanf("%d",&n)!=EOF){             //輸入
	
	
	if (check_prime(n)==0){
		printf("非質數\n");
	}
	else{
		printf("質數\n");
	}
}   



	return 0;
}
int check_prime(int num){  //判斷是否為質數 

	for (i=1;i<=x&&prime[i]*prime[i]<=num;i++)
	{
		if (num%prime[i]==0)
		{
			return 0;
		}
	}
	return 1;
}
void build_prime(){          //建立質數表到根號2147483647 
	for (j=8;j<46431;j++){
		if (check_prime(j)==1){
			prime[x+1]=j;
			x++;
		}
		
	}
}

