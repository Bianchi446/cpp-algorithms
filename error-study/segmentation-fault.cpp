#include <iostream>
#include <stdio.h>

// Program to show segmentation fault by modyfing a string literal 

int main()
{
	char* str;

	str = "GFG";

	// Problem : Trying to modify read only memory  
	*(str + 1) = 'n';
	return 0;
}
