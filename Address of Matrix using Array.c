#include <stdio.h>
int main(){
	
	int arr[2][3], i, j;
	printf("Enter the Array Elements : \n");
	
	
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			printf("Enter arr[%d][%d] = ", i+1, j+1);
			scanf("%d", &arr[i][j]);
			
		}
	printf("\n");
	}
	
	
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
	        
			printf("arr[%d][%d] = %u \t", i+1, j+1, &arr[i][j]);
		}
	}
	
	
	
return 0;	
}
