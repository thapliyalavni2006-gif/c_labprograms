#include <stdio.h>
void add(int,int);
int x=10;
int y=20;

int main() {
	int x=300; //local variable
	int y=5;
	add(x,y);
	for(int x=0;x<3;x++)
	{
		printf("first=%d\t",x++); //x=0,x=2
	}//x=4
	printf("second=%d",x);
}

void add(int a,int b)   //x=3, y=5
{
	int sum;
	sum=x+y;
	printf("x=%d,y=%d\n",x,y);
	printf("Sum=%d",sum);
}