#include <stdio.h>
int main(){

    int a,sum=0,r;
    printf("Enter the Number may be more then two digits : ");
    scanf("%d", &a);

    while(a>0){

        r=a%10;

        sum=sum+r;

        a=a/10;

    }
    printf("The Sum of Digits : %d", sum);


return 0;    
}
