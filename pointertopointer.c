#include <stdio.h>
int main()
{
	int x=30;
	int *p=&x;
	int **q=&p;
	printf("%d\n",x);
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",q);
	printf("%d",**q);
	return 0;
}