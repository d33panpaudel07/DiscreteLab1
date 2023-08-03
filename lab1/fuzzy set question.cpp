#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter the age of person %d",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<=20)
		printf("Degree of Membership of person %d is 1\n",i+1);
		else if(a[i]>20&&a[i]<=30)
		printf("Degree of Membership of person %d is %f\n",i+1,(30.00-(float)a[i])/30.00);
		else
		printf("Degree of Membership of person %d is 0\n",i+1);
	}
	return 0;
}
