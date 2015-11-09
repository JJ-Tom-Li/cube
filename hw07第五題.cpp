#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k,l,n;
	char ch;
	while(1)
	{
		printf("請輸入一字元*:\n");
		fflush(stdin);
		ch=getchar();
		printf("請輸入一個1~5的正整數:\n");
		scanf("%d",&n);
		if (ch=='*'&&n>=1&&n<=5)
			break;
		printf("輸入錯誤\n");
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=3;j++)
		{
			for (k=1;k<=3-j;k++)
			{
				printf(" ");
			}
			for (l=1;l<=2*j-1;l++)
			{
				printf("%c",ch);
			}
			printf("\n");	
		}
	}
	printf("  *\n  *\n  *\n");







	system("PAUSE"); 
	return 0;
}
