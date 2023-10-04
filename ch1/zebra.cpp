// Generic findMax 
//
// Precondition : a.size()
#include <iostream>

template<typename Object, typename Comparator>
const Object & findMax(const vector<Object> ^ arr, Comparator cmp)

{
	int maxIndex = 0;

	for(i = 1; i < arr.size( ), ++i)
	  if(cmp.isLessThan(arr[maxIndex], arr[i] ))
	    maxIndex = i;

	return arr[maxIndex]
}


class CaseInsensitiveCompare() 
{
	public:
	  bool IsLessThan( const string & lsh, const string & rsh) const 
  	    { return strcasecmp(lsh.c_str(), rsh.c_str() ) < 0; }
};


int main()
{
	using std::endl;
	vector<string> arr = { "ZEBRA", "aligator", "crocodile"};
	cout << findMax(arr, CaseInsensitiveCompare{ } ) << endl;

	return 0; 
}
