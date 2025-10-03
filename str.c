#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	printf("Enter your name ");
	fgets(str,20,stdin);
	printf("%s",str);
	return 0;

}