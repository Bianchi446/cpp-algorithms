#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Allocation memory to p
	int* p = (int*)malloc(8);
	*p = 100;

	// Deallocated the space allocated to p
	free(p);

	// Core dump segmentation fault 
	*p = 110;
	printf("%d\n", *p);

	return 0;
}
