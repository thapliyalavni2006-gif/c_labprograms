//develop C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.

#include <stdio.h>

int ISPRIME(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (ISPRIME(num))
        printf("1\n");   // prime
    else
        printf("0\n");   // not prime
 return 0;
}

int ISPRIME(int num) {
    if (num<=1)
        return 0;   // not prime
  for (int i=2;i*i<=num;i++) {
        if (num %i==0)
            return 0;   // not prime
    }
    return 1;   // prime
}
