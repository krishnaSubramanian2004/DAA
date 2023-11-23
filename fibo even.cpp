#include <stdio.h>

int main() {
    int n, i,f[50],Sum = 0; 
    printf("Enter the number: ");
    scanf("%d", &n);
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (i = 0; i < n; i += 2) {
        Sum += f[i];
    }
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%lld ", f[i]);
    }
    printf("\nSum of even: %d\n",Sum);
    return 0;
}
