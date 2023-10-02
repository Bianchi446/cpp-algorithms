// Recursion funcion in c++ 

int main( int x )
{
 
	if (x == 0)
		return 0;
	else
		return 2 * main(x - 1) + x * x;
	

}




