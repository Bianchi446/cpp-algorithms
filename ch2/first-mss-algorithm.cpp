// First algorithm for the subsequence sum problem 
#include <iostream>
#include <vector>
using namespace std;


int maxSubSum1(const vector<int> & a)
{

	int maxSum = 0;

	for( std::size_t i = 1; i < a.size(); ++i)
	    for( std::size_t j = i; j < a.size(); ++j)
	    {
		int thisSum = 0;

		for( std::size_t  k = i; k <= j; ++k)
		    thisSum += a[k];

	
		if(thisSum > maxSum)
			maxSum = thisSum;
	    }	    

	return maxSum;
}


int main() 
{
	vector<int> a {4, -3, 5, -2, -1, 2, 6, -2};
	int maxSum;

	maxSum = maxSubSum1( a );
	cout << "Max sum is " << maxSum << endl; 
}
