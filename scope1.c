
#include <stdio.h>
void add(int,int);
int x=10;
int y=20;

int main() {
	int x=3; //local variable
	int y=5;
	//add(x,y);  //add(3,5)
	for(x=0;x<3;x++)
	{
		printf("first=%d\t",x++); //x=0,x=2
	}//x=4
	printf("second=%d",x);
}

void add(int x,int y)
{
	int sum;
	sum=x+y;
	printf("x=%d,y=%d\n",x,y);
	printf("Sum=%d",sum);
}
