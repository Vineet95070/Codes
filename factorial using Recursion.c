#include <stdio.h>

int factorial( int a )
{
	
	if(a == 0 || a== 1)
	{
		return 1;
	}
	else
	{
		a = a*factorial(a-1);
	
        return a;	
	}
	
	
}

int main(){
	
	int num;
	printf("Enter the Number : ");
	scanf("%d", &num);
	printf("The factorial of %d is %d.", num, factorial(num));
	
return 0;	
}
