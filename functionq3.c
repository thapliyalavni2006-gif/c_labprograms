//Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.

#include <stdio.h>
int FIBO(int num);

int main()
{
	int num;
	printf("enter number ");
	scanf("%d",&num);
    printf("Fibonacci sequence up to %d terms:\n",num);
    for (int i=0;i<num;i++) {
        printf("%d ",FIBO(i)); }
	return 0;
}

int FIBO(int num) {
	if (num==0) {
		return 0;
	}
	if (num==1) {
		return 1;
	}

	int fibnm1=FIBO(num-1);
	int fibnm2=FIBO(num-2);
	int fibn=fibnm1+fibnm2;
	return fibn;
}
