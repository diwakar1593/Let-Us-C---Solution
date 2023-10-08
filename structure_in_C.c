#include <stdio.h> 
#include <string.h> 
 
struct student { 
	char name[20]; 
	int roll_no; 
	char address[50]; 
	char branch[50]; 
}; 

// Driver code 
int main() 
{ 
	struct student obj; 

	strcpy(obj.name, "Kamlesh_Joshi"); 
	obj.roll_no = 27; 
	strcpy(obj.address, "Haldwani"); 
	strcpy(obj.branch, "Computer Science And Engineering"); 

	// Accessing members of student obj 
	printf("Name: %s\n", obj.name); 
	printf("Roll_No: %d \n", obj.roll_no); 
	printf("Address: %s\n", obj.address); 
	printf("Branch: %s", obj.branch); 

	return 0; 
}
