#include <stdio.h>      //Call by Value function program
int main(){
	
	int a, b;
	
	printf("Enter first and second numbers : ");
	scanf("%d%d", &a, &b);
	printf("%d and %d\n", a, b);
	
	swap(a,b);
	printf("%d and %d\n", b, a);
	
return 0;	
}

int swap(int x, int y){
	
	int temp;
	
	temp= x;
	x= y;
	y= temp;
	
return 0;	
}
