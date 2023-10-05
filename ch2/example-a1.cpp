#include <iostream>
using namespace std;

int main(int n) 
{
	int partialSum;

	partialSum = 0;
	for( int i = 1; i <= n; ++i)
		partialSum += i * i * i;
	return partialSum;

	cout << partialSum << "\n";
}



