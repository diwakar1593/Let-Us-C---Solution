#include <stdio.h> 
int main() 
{ 
	static int val; 
	int x; 
	printf("Initial value of static variable %d\n", val); 
	printf("Initial value of variable without static %d", 
		x); 
	return 0; 
}
