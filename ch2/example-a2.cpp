#include <iostream>

// Example 2a -- This program have both O(N) and O(N^2) work. 

int main( int n )
{
	int a, j , i = 0;

	for(i = 0; i < n; ++i)
		a[i] = 0;
	for(i = 0; i < n; ++i)
	    for(j = 0; j < n; ++j)
		a[i] += a[j] + i + j;

	return 0;
}	
