#include <stdio.h>
int main() {
  int i, n,n1 = 0,n2 = 1,n3 = n1 + n2,sum;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", n1, n2);
  for (i = 3; i <= n; ++i) {
  	{
  		if(i%2==0)
  		{
  			
		}
		sum+=i;
	  }
    printf("%d, ", n3);
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }
  return 0;
}
