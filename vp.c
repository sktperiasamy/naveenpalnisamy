#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	printf("enter the no ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<3;i++)
	{
	for(j=i+1;j<3;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
	}
	for(i=0;i<3;i++)
	printf("%d",a[i]);
	return 0;
}
