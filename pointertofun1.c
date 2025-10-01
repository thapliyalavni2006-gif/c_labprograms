#include <stdio.h>
//pointer to functions

int add(int,int);

int main()
{
	int sum;
	int (*fp)(int,int); //calling fn through pointer fp(pointer function)
	fp=&add;             //holding address of function
	sum=fp(10,30);
	printf("sum=%d",sum);

	return 0;
}

int add(int a,int b)
{
	return a+b;
}

