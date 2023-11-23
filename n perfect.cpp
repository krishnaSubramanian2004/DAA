#include <stdio.h>
int isPerfect(int num) {
    int sum = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}
void printPerfectNumbers(int n) {
    int count = 0;
    int num = 2; 
    while (count < n) {
        if (isPerfect(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d perfect numbers are: \n", n);
    printPerfectNumbers(n);
    return 0;
}

