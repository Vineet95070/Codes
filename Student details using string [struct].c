#include <stdio.h>

struct{
	
	char *fee;
	char *name;
	char *phone;
	
}student1, student2;

int main(){
	
	student1.fee = "Fee have due : ";
	student1.name = "Rupak Gupta : ";
	student1.phone = "6207831553";
	
	student2.fee = "Fee have No Due : ";
	student2.name = "Vineet kr Chaubey : ";
	student2.phone = "7739318990";
	
	printf("Account details of Rupak Gupta is : \n");
	printf("Fee Deatil :- %s\n", student1.fee);
	printf("Name of Student :- %s\n", student1.name);
	printf("Contact Information :- %s\n", student1.phone);
	
	printf("Account details of Vineet kr Chaubey : \n");
	printf("Fee Details :- %s\n", student2.fee);
	printf("Name of Student :- %s\n", student2.name);
	printf("Contact Information :- %s\n", student2.phone);
	
	
}
