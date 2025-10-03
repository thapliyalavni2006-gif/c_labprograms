#include <stdio.h>
void add(int, int);
int x=10;
int y=20;

int main()
{
	int x=3;
	int y=5;
	add(x,y);
	return 0;
}
void add( a,b)
{
int sum;
sum=a+b;
printf("%d",sum);
}