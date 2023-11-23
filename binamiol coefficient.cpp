#include <stdio.h>
int bin(int n) {
   for (int i = 0; i <= n; i++) {
      int num = 1;
      for(int space=1; space <= n-i; space++)
            printf("  ");
      for (int j = 0; j <=i; j++) {
      	printf(" ");
         if (i != 0 && j != 0){
         num = num * (i - j + 1) / j;}
         printf(" %d", num);
      }
      printf("\n");
   }
}
int main() {
   int n ;
   printf("value of n:");
   scanf("%d",&n);
   bin(n);
   return 0;
}
