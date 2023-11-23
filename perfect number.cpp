#include<stdio.h>
int main(){
   int number,i,sum=0;
   printf("enter the number:");
   scanf("%d",&number);
   for(i=1;i<=number;i++){
      if(number%i==0)
         sum=sum+i;
   }
   if(sum==2*number)
      printf("perfect number");
   else
      printf("not perfect number");
}
