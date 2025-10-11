#include <stdio.h>


int FACT(int n) {
    if (n ==0 || n== 1)
        return 1;
    return n*FACT(n-1);
}

// Function to calculate binomial coefficient
int binomial(int n,int r) {
    return FACT(n)/(FACT(r)*FACT(n-r));
}

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d",&n);

    printf("\nBinomial Coefficients (C(n, r))\n");
    printf("   n    r    C(n,r)\n");
	for (int i=0;i<=n;i++) {
        for (int j=0;j<=i;j++) {
            printf("%4d %4d %4d\n",i,j,binomial(i,j));
        }
    }

    return 0;
}
