#include <stdio.h>
int main(){
	
	int arr[2][3], i, j;
	printf("Enter the Array Elements : ");
	
	
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			printf("Enter arr[%d][%d] = ", i+1, j+1);
			scanf("%d", &arr[i][j]);
			
		}
	printf("\n");
	}
	
	
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
	        int *ptr1 = &i;
	        int *ptr2 = &j;
	        int *ptr = &arr[i][j];
			printf("arr[%d][%d] = %d \t", i+1, j+1, *ptr);
		}
	}
	
	
	
return 0;	
}
