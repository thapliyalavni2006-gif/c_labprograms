#include <stdio.h>

struct comp{
    float real;
    float imag;
};

struct comp addComplex(struct comp n1,struct comp n2) {
    struct comp result;
    result.real=n1.real+n2.real;
    result.imag=n1.imag+n2.imag;
    return result;
}

void displaycomp(struct comp num) {
    printf("%.2f+%.2fi\n",num.real,num.imag);
}

int main() {

    struct comp complexn1,complexn2,sumResult;
    printf("enter real part of complex number 1: ");
    scanf("%f",&complexn1.real);
	printf("enter imaginary part of complex number 1: ");
    scanf("%f",&complexn1.imag);
	printf("enter real part of complex number 2: ");
	scanf("%f",&complexn2.real);
	printf("enter imaginary part of complex number 2: ");
	scanf("%f",&complexn2.imag);

    sumResult=addComplex(complexn1,complexn2);
    printf("\nSum of Complex Numbers:\n");
    displaycomp(sumResult);

    return 0;
}