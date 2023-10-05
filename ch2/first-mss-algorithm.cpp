// First algorithm for the subsequence sum problem 
#include <iostream>
#include <vector>
using namespace std;


int main(const vector<int> & a)
{

	int maxSum = 0;

	for(int i = 1; i < a.size(); ++i)
	    for(int j = i; j < a.size(); ++j)
	    {
		int thisSum = 0;

		for(int k = i; k <= j; ++k)
		    thisSum += a[k];

	
		if(thisSum > maxSum)
			maxSum = thisSum;
	    }	    

	return maxSum;

	cout << maxSum << "\n";
}
