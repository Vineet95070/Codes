//Name :- Vineet Kr Chaubey
//Roll No :- bcah1ca21036

#include <stdio.h>
#include <math.h>
int main(){
    
    int sum=0, i=1, power,a=0;
    
    
    
    while (i<=10 && a<=10){
    	
    	a=2*i-1;
    	sum=sum+power;
    	power= pow(a,2);
    	
    	i++;
	}
	
	printf("%d", sum);
    
return 0;    
}
