#include<stdio.h>
int flr(float x);
int cei(float y);
int main()
{
	float value;
	int a=0,b=0;
	printf("Enter a number:");
	scanf("%f",&value);
	a=flr(value);
	b=cei(value);
	printf("Floor=%d and Ceiling=%d",a,b);
	return 0;
}

int flr(float y)
{
	int t;
    if(y<0)
	{
       t=(int)y +(-1);
       return t;
    }
    else 
	return y;
}

int cei(float x)
{
	if(x-(int)x==0) 
        return x;
    else
    	return flr(x)+1;
}

