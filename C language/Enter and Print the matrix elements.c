#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
	
	char hexa[100];
	int len, j=0, i, sum=0;
	
	printf("Enter the Hexa Value : ");
	scanf("%s", &hexa);
	
	len= strlen(hexa);
	printf("The size of Hexa Value you Entered is %d\n", len);
	
	for(i=len-1; i>=0; i--)
	{
		printf("The sum is : %d\n", sum);
		
		if(hexa[i]>='0' && hexa[i]<='9')
		
		{
			sum=sum+ (hexa[i]-48)*pow(16, j);
			j++;
		}
	
	else if(hexa[i]>='A' && hexa[i]<='F')
	    {
	    	
	    	sum =sum+ (hexa[i]- 55)*pow(6, j);
	    	j++;
		}
	
	}
	
	printf("The Decimal of %s is %d", hexa, sum);
	
return 0;	
}
