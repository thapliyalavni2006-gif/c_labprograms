#include <stdio.h>
int main()
{
	int r;
	printf("enter rows");
	scanf("%d", &r);
	for (int i = 0; i < r; i++)
	{
		for (int j = r - 1; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}