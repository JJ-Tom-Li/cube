#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,j,k;
int check_len(int *num);            //數字長度 
void zero(int *num);              //數字陣列歸零 
void convert(char *s,int *num);     //字串轉數字陣列 
void printnum(int *num);           //顯示數字陣列 
//加減乘除------------------------------- 
void sum(int *n1,int *n2,int *rst);             
void differ(int *n1,int *n2,int *rst);
void cross(int *n1,int *n2,int *rst);
void divide(int *n1,int *n2,int *rst);
//除法用函式-----------------------------
int bigger(int *n1,int *n2);       //如果n1較大回傳1，n2較大回傳0 ,兩個一樣回傳-1
void divi_cross(int *num,int x);
void divi_divide(int *num,int x);
//----------------------------------------- 
//------------------------------ 
int main(int argc, char *argv[]) {
	
	int num1[500]={0},num2[500]={0},result[500]={0};
	char n1[500],n2[500],ch;
	
	while(scanf("%s %c %s",n1,&ch,n2)!=EOF)
	{
		convert(n1,num1);
		convert(n2,num2);
		if(ch=='+')
		{
			sum(num1,num2,result);
			printnum(result);
		}
		else if(ch=='-')
		{
			if (bigger(num1,num2)==0)
				printf("-");
			differ(num1,num2,result);
			printnum(result);
		}
		else if(ch=='*')
		{
			cross(num1,num2,result);
			printnum(result);
		}
		else
		{
			divide(num1,num2,result);
			printnum(result);
		}
		zero(num1);
		zero(num2);
		zero(result);
	}
	
	
	
	return 0;
}
//------------------------------------- 
//數字長度----------------------------- 
int check_len(int *num)
{
	for (i=499;i>=0;i--)
	{
		if (num[i]!=0)
			return i+1;
	}
}
//----------------------------------
//數字陣列歸零---------------------- 
void zero(int *num)
{
	for (i=0;i<500;i++)
	{
		num[i]=0;
	}
}
//-----------------------------------
//字串轉數字陣列--------------------- 
void convert(char *s,int *num)
{
	int len=strlen(s);
	for (i=len-1;i>=0;i--)
	{
		num[len-i-1]=s[i]-'0';
	}
}
//-----------------------------------
//顯示數字陣列-----------------------
void printnum(int *num)
{
	for (i=500-1;i>0&&num[i]==0;i--);
	while(i>=0)
	{
		printf("%d",num[i]);
		i--;
	} 
	printf("\n");
} 
//-----------------------------------
//加法-------------------------------
void sum(int *n1,int *n2,int *rst)
{
	int carry=0;
	for (i=0;i<500;i++)
	{
		rst[i]=n1[i]+n2[i]+carry;
		carry=rst[i]/10;
		rst[i]=rst[i]%10;
	}
}
//-------------------------------------
//減法---------------------------------
void differ(int *n1,int *n2,int *rst)
{
	int borrow=0;
	if (bigger(n1,n2)==1)
	{
		for (i=0;i<500;i++)
		{
			rst[i]=n1[i]-n2[i]-borrow;
			if (rst[i]<0)
			{
				rst[i]=rst[i]+10;
				borrow=1;
			}
			else
				borrow=0;
		}
	}
	else
	{
		for (i=0;i<500;i++)
		{
			rst[i]=n2[i]-n1[i]-borrow;
			if (rst[i]<0)
			{
				rst[i]=rst[i]+10;
				borrow=1;
			}
			else
				borrow=0;
		}
	}
	
}
//------------------------------------
//乘法--------------------------------
void cross(int *n1,int *n2,int *rst)
{
	int carry=0;
	for (i=0;i<500;i++)
	{
		if (n1[i]==0) continue;
		for (j=0;i+j<500;j++)
		{
			rst[i+j]=rst[i+j]+n1[i]*n2[j];
		}
	}
	
	for (i=0;i<500;i++)
	{
		rst[i]=rst[i]+carry;
		carry=rst[i]/10;
		rst[i]=rst[i]%10;
	}
}
//--------------------------------------
//除法----------------------------------
void divide(int *n1,int *n2,int *rst)
{
	int big=bigger(n1,n2),len1,len2,divisor[500]={0},dividend[500]={0},tmp[500]={0};
	if (big==-1)
	{
		rst[0]=1;
	}
	else if (big==0)
	{
		rst[0]=0;
	}
	else
	{
		len1=check_len(n1);
		len2=check_len(n2);
		for (i=0;i<len2;i++)
		{
			divisor[i]=n2[i];
		}
		divi_cross(divisor,len1-len2);
		for (i=0;i<len1;i++)
		{
			dividend[i]=n1[i];
		}
		for (k=0;k<=len1-len2;k++)
		{
			j=0;
			zero(tmp);
			while(j<=9)
			{
				if (bigger(divisor,dividend)==1)
				{
					break;
				}
				else
				{
					differ(dividend,divisor,tmp);
					for (i=0;i<len1;i++)
					{
						dividend[i]=tmp[i];
					}

				}
				j++;
			}
			rst[len1-len2-k]=j;
			divi_divide(divisor,1);
		}
	}

}
//除法用函式-----------------------------

int bigger(int *n1,int *n2)       //如果n1較大回傳1，n2較大回傳0,兩個一樣回傳-1 
{
	for (i=500-1;i>=0;i--)
	{
		if (n1[i]!=0&&n2[i]==0)
			return 1;
		if (n2[i]!=0&&n1[i]==0)
			return 0;
		if (n1[i]!=0&&n2[i]!=0)
		{
			if (n1[i]>n2[i])
				return 1;
			if (n1[i]<n2[i])
				return 0;
		}
	}
		return -1;
} 
void divi_cross(int *num,int x)
{
	for (j=0;j<x;j++)
	{
		for (i=498;i>=0;i--)
		{
			num[i+1]=num[i];
		}
		num[0]=0;
	}
}
void divi_divide(int *num,int x)
{
	for (i=0;i<x;i++)
	{
		for (j=1;j<500;j++)
		{
			num[j-1]=num[j];
		}
		num[499]=0;
	}
}
//----------------------------------------- 
//------------------------------------------ 
