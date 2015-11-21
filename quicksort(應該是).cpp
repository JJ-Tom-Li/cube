#include <stdio.h>
#include <stdlib.h>
void quicksort(int*,int,int);
int i,j,tmp;
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
	quicksort(num,0,n-1);
	for (i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
}






	return 0;
}
void quicksort(int* arr,int left,int right)
{
	int mid=left;
	if (left==right)
		return;
	else
	{
		for (i=left+1;i<=right;i++)
		{
			if (arr[i]<arr[mid])
			{
				tmp=arr[i];
				for (j=i-1;j>=0;j--)
				{
					arr[j+1]=arr[j];
				}
				arr[left]=tmp;
				mid++;
			}
		}
		quicksort(arr,left,mid);
		quicksort(arr,mid+1,right);
	}
	
}
