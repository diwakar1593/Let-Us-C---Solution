#include <stdio.h> 

int main() 
{ 
	for (;;) { 
		printf("Infinite-loop\n"); 
	} 

	while (1) { 
		printf("Infinite-loop\n"); 
	} 

	do { 
		printf("Infinite-loop\n"); 
	} while (1); 

	return 0; 
}
