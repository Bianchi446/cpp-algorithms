#include <stdio.h>

// Error : Deference an unitialized pointer 


// C program to demonstrate segmentation
// fault when uninitialized pointer
// is accessed
#include <stdio.h>
 
int main()
{
    int* ptr;
    int* nptr = NULL;
    printf("%d %d", *ptr, *nptr);
    return 0;
}
