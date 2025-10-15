//call by value

#include <stdio.h>

int mul(int ,int );
int a=10;
int b=30;

int main()
{
printf("Product of %d and %d is %d",a,b,mul(a,b));
}

int mul(int x,int y)
{
	return x*y;
}

