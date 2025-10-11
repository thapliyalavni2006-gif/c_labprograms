//Develop a recursive function GCD (num1, num2) that accepts two integer arguments. //Write a C program that invokes this function to find the greatest common divisor of two given integers.


int main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("The GCD of %d and %d is %d\n",a,b,GCD(a,b));
    return 0;
}
int GCD(int n1,int n2) {
    if (n2==0)   // base case
        return n1;
    else
        return GCD(n2,n1%n2);
}
