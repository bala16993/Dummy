#include<stdio.h>

void main()
{
	int a[50];
	int i;
    int n;
    n=5;
	printf("\n Enter %d Values:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	biggest (a,n-1,a[0]);
}

biggest (int *num,int nn,int big)
{
	if(nn<0)
	{
		printf("\n Biggest:%d",big);
	}
	else
	{
		if(*num > big)
		big=*num;
		
		biggest(++num,--nn,big);
	}
	
	
}
