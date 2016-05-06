#include <stdio.h>
#include <stdlib.h>
#define MAX_POINTS 100   //最多可輸入點的數目 

void initialQ(int*,int);   //初始化Q 
int checkVoid(int*,int);      //確定Q是否為空集合，如果是空集合回傳0，不是回傳1 
void Dijkstra(int[MAX_POINTS+1][MAX_POINTS+1],int);     //最短路徑演算法 
int findMin(int*,int);    //找最小值 
int main(int argc, char *argv[]) {
	/*
		Number存放總共有幾個點  
		graph[]記錄點的路徑權重，預設為-1(無法抵達) 
	*/
	int Number;
	int graph[MAX_POINTS+1][MAX_POINTS+1]={-1};
	int i,j,tmp;
	
	scanf("%d",&Number);  //輸入總共有幾個點
	
	for(i=1;i<=Number;i++)  //照順序輸入每條路徑的權重，如果輸入-1就是無限大 
	{
		for(j=1;j<=Number;j++)
		{
			scanf("%d",&tmp);
			if(tmp==-1)
			{
				graph[i][j]=999999;
			}
			else
			{
				graph[i][j]=tmp;
			}
		}
	}
	
	Dijkstra(graph,Number);    
	
/*	for(i=1;i<=Number;i++)  //顯示圖(測試用) 
	{
		for(j=1;j<=Number;j++)
		{
			printf("%d\t",graph[i][j]);
		}
		printf("\n");
	}*/

	
	return 0;
}

void initialQ(int* Q,int number)
{
	int i;
	for (i=1;i<=number;i++)
		Q[i]=i;
}

int checkVoid(int* Q,int number)
{
	int i;
	for(i=1;i<=number;i++)
	{
		if (Q[i]!=0)
			return 1;	
	}
	return 0;
} 

void Dijkstra(int graph[MAX_POINTS+1][MAX_POINTS+1],int Number)
{
	/*
		Q[]紀錄還沒被處理過的點集合
		path[]記錄每個點與1的最短路徑，預設為2147483647(無限大)
		shortest[]紀錄提出點的順序 
	*/
	int Q[MAX_POINTS+1];
	int path[MAX_POINTS+1]={999999};
	int shortest[MAX_POINTS+1];
	int i,j,l;
	
	initialQ(Q,Number);    //初始化Q
	Q[1]=0;     //先將1提出 
	shortest[1]=1;
	
	for(i=1;i<=Number;i++)    //將1到各點路徑的權重放到path裡面 
	{
		path[i]=graph[1][i];
	}
	
	shortest[2]=findMin(path,Number);    //用目前路徑最短的當作下一個提出點 
	Q[shortest[2]]=0;
	i=2;
	while(checkVoid(Q,Number)!=0)
	{
		printf("1與各點的最短路徑為:\n");     //顯示結果 
		for(l=1;l<=Number;l++)  
		{
			printf("%d ",path[l]);
		}
		printf("\n");
		for(j=2;j<=Number;j++)    //relax path值 
		{
			if(Q[j]!=0&&graph[shortest[i]][j]!=999999)    //已提出的點不改變path 
			{
				if(path[j]>path[shortest[i]]+graph[shortest[i]][j])
				{
					path[j]=path[shortest[i]]+graph[shortest[i]][j];
				}
			}
		}
		
		int k,min,minvalue=999999;
		for (k=2;k<=Number;k++)
		{
			if ((minvalue>path[k])&&(Q[k]!=0)&&k!=shortest[i])
			{
				minvalue=path[k];
				min=k;	
			}
		}
		i++;
		shortest[i]=min;
		Q[shortest[i]]=0;
		
	}
	  
	printf("1與各點的最短路徑為:\n");     //顯示結果 
	for(i=1;i<=Number;i++)  
	{
		printf("%d ",path[i]);
	}
	printf("\n");
	for(i=1;i<=Number;i++)
	{
		printf("shortest[%d]=%d\n",i,shortest[i]);
	}
	 
}

int findMin(int* path,int number)
{
	int i,min=2;
	for (i=3;i<=number;i++)
	{
		if (path[min]>=path[i])
			min=i;	
	}
	return min;
}



