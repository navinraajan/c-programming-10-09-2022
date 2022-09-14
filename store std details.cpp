#include<stdio.h>
int main()
{
	int n,regno,marks,i,a;
	char name[50];
	printf("enter the no. of stu details:");
	scanf("%d",&n);
	printf("enter the studet details:");
	for(i=1;i<=n;i++)
	{
		
	
	printf("\n enter the name:");
	scanf("%s",&name);
	printf("\n enter the regno:");
	scanf("%d",&regno);
	printf("\n enter the marks:");
	scanf("%d",&marks);
	
	printf("\n display informaton \n");
	printf("\n name: %s",name);
	printf("\n regno : %d",regno);
	printf("\n marks : %d",marks);
	}
	return 0;
}