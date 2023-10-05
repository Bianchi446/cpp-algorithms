// C program to illustrate the 
// segementation fault due to
// buffer overflow
#include <stdio.h>
 
int main()
{
    char ref[20] = "This is a long string";
    char buf[10];
    sscanf(ref, "%s", buf);
    return 0;
}
