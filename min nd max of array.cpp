#include<stdio.h>
#include<conio.h>
int main()
{
	int a[1000],i,n,min,max;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min = max = a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min = a[i];
		if(max<a[i])
		max = a[i];
	}
	printf("minimum value of array: %d",min);
	printf("maximum value of array: %d",max);
	return 0;
	
}