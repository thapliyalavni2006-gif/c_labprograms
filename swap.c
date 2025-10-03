#include <stdio.h>
void swap(int *,int *);
 int main() {
	int x=10,y=30;
	printf("before swapping,x=%d and y=%d\n",x,y);
	swap(&x,&y);
	printf("after swapping,x=%d and y=%d",x,y);
	return 0;
 }

 void swap(int *a,int *b)
 {
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("inside function after swapping,x=%d and y=%d\n",*a,*b);
 }