#include <stdio.h>
int main(){
	
	int arr[ ]={10,20,30,40,50,60,70,80,90,100};
	int *i, x;
	
	printf("Enter the Numer of Element which you want to address : ");
	scanf("%d", &x);
	
	i= &arr[x-1];
	
	printf("The address of '%d' number element is %d", x, i);
	
return 0;	
}
