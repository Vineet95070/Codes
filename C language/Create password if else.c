#include <stdio.h>
int main(){

    int i;
    printf("Create a Password ");

    scanf("%d", &i);

    printf("Your Password is Sucessfully saved \n");

    int j;
    printf("Enter your password ");

    scanf("%d", &j);
    if(j==i){

        printf("Welcome");
    }
    else{printf("Incorrect Password");}


return 0;    
}
