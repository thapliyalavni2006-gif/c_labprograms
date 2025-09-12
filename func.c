#include <stdio.h>

void add(int, int);
void main()
{
	add(10, 11);
}

void add(int x, int y)
{
	int sum;
	sum = x + y;
	printf("%d", sum);
}
