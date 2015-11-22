#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i,j;
void radixsort(int*,int);
int findmax(int*,int);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int num[n];
		for (i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		radixsort(num,n);
		for (i=0;i<n;i++)
		{
			printf("%d ",num[i]);
		}
		printf("\n");
	}




	return 0;
}

void radixsort(int* arr,int size)
{
	int bucket[10][size];
	int max,radix=10,tmp,c=0;
	max=pow(10,findmax(arr,size));
	while(radix<=max)
	{
		int count[10]={0,0,0,0,0,0,0,0,0,0};
		for (i=0;i<size;i++)
		{
			tmp=(arr[i]%radix-arr[i]%(radix/10))/(radix/10);
			bucket[tmp][count[tmp]]=arr[i];
			count[tmp]++;
		}
		int k=0;
		for (i=0;i<10;i++)
		{
			while(c<count[i]&&count[i]!=0)
			{
				arr[k]=bucket[i][c];
				c++;
				k++;
			}
			c=0;
		}
		
		radix=radix*10;
	}

}

int findmax(int* arr,int size)
{
	int max=arr[0],c=1;
	for (i=0;i<size;i++)
	{
		if (max<=arr[i])
		{
			max=arr[i];
		}
	}
	while(max>=10)
	{
		max=max/10;
		c++;
	}
	return c;
} 
