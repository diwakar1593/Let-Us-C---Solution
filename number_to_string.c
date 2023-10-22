#include <stdio.h> 
#include <string.h> 

// Driver code 
int main() 
{ 
	char res[20]; 
	float a = 32.23; 
	sprintf(res, "%f", a); 
	printf("\nThe string for the num is %s", res); 
	return 0; 
}
