#include <stdio.h>
int main(){

   int x=0, num;
   printf("Enter the Number : ");
   scanf("%d", &num);

   do{

      x=x+1;

      printf("%d\n", x);
   }while(num>x);




return 0;   
}
