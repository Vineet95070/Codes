#include <stdio.h>
int main(){

   int num, x=1;
   printf("Ener Your NUmber : ");
   scanf("%d", &num);

   do{
      x=x+1;
      
      printf("%d\n", x);
      
   }while(num>=x);

return 0;   
}
