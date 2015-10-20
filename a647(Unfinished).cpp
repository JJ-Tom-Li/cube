#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j;
	float earn;
	int tmp;
while (scanf("%d",&n)!=EOF)
{
	float inve[n],worth[n];
	for (i=0;i<n;i++)
	{
		scanf("%f %f",&inve[i],&worth[i]);
	}
	for (j=0;j<n;j++)
	{
		earn=(((worth[j]-inve[j]))*100000/inve[j]);
		tmp=(((worth[j]-inve[j]))*1000000/inve[j]);
		if (tmp%10>=5)
		{
			earn=earn+1;
			earn=earn-(tmp%10)*0.1;
		}
		float final=earn/1000;
		if (final==(-0.00))
		{
			printf("0.00");
		}
		else
		{
			printf("%.2f",final);
		}
		if (final>=10.00||final<=-7.00)
		{
			printf("%% dispose\n");
		}
		else
		{
			printf("%% keep\n");
		}
	}
}








	return 0;
}

