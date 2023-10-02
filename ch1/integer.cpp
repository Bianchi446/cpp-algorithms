// Recursive routine to print an integer 



int main(int n)  // print non-negative integer
{

	if(n >= 10)
		main(n / 10);
	main(n % 10);
}


