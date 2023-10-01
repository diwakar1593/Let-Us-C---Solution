// C program to print initial
// value of static variable
#include <stdio.h>
int main()
{
	static int var;
	int x;
	printf("Initial value of static variable %d\n", var);
	printf("Initial value of variable without static %d",
		x);
	return 0;
}
