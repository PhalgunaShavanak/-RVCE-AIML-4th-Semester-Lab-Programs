#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int table[1000],flag;
void ShiftTableComputation(char p[])
{
	int m,i,j;
	m=strlen(p);
	for (i=0;i<1000;i++)
	table[i]=m;
	for (j=0;j<=m-2;j++)
	table[p[j]]=m-1-j;
}

int HPoolStringMatching(char p[],char t[])
{
	int m,n,i,j,k,flag=0;
	ShiftTableComputation(p);
	m=strlen(p);
	n=strlen(t);
	i=m-1;
	while (i<=n-1)
	{
		k=0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -1-k])
		k++;
		if (k==m)
		{ 
			flag=1;
			printf("Found at position %d\n",i-m+2);
			i=i+table[t[i]];
			
		}
		
		else
		i=i+table[t[i]];
	}
	return -1;
}

int main()
{
	char str[100],ptr[100];
	int res;
	printf("Enter the text:\n");
	scanf("%s",str);
	printf("Enter pattern:\n");
	scanf("%s",ptr);
	res=HPoolStringMatching(ptr,str);
	if (res==-1 && flag==0)
	printf("Not found\n");	
}
