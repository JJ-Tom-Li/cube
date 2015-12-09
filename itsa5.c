#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mazerun(int t,int maze[100][5],int posi);

int main(int argc, char *argv[]) {
	int n,i,j,k;
while(scanf("%d",&n)!=EOF)
{
	for (i=0;i<n;i++)
	{
		int num;
		scanf("%d",&num);
		int maze[num][5];
		for (j=0;j<num;j++)
		{
			for (k=0;k<5;k++)
			{
				scanf("%d",&maze[j][k]);
			}
		}
		int time;
		scanf("%d",&time);
		int u=0;
		u=mazerun(time+1,maze,0);
		printf("%d\n",u);
	}
}
	
	
	
	
	return 0;
}

int mazerun(int t,int maze[100][5],int posi)
{
	static int n=0;
	static int u=0;
	if ((u==t)||(maze[posi][4]==1))
	{
		return;
	}
	else
	{
		u++;
		mazerun(t,maze,maze[posi][1]-1);
		mazerun(t,maze,maze[posi][2]-1);
		mazerun(t,maze,maze[posi][3]-1);
		
	}	
}
