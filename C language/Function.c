#include <stdio.h>

int Area_Of_Rect (int length, int breadth)

{
	int Area;
	Area= length * breadth;
	
	
	return Area;
}

int main(){
	
	int l , b;
	
	printf("Enter the Length : ");
	scanf("%d", &l);
	
	printf("Enter the Breadth : ");
	scanf("%d", &b);
	
	int Area= Area_Of_Rect (l,b);
	
	printf("Area is %d", Area);
	
return 0;	
}
