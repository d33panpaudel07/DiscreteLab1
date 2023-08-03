#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,j,k,l;
	printf("Enter the number of elements of set A: ");
	scanf("%d",&k);
	printf("Enter the elements of set A");
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of elements of Set B: ");
	scanf("%d",&l);
	printf("Enter the elements of set B");
	for(i=0;i<l;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n Cartessian Product=");
	printf("{");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("(");
			printf("%d,%d",a[i],b[j]);
			printf(")");
			printf(",");
		}
	}
	printf("}");
	return 0;
}
