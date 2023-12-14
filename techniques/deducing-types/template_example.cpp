#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;

template<typename T>
T myMax(T x, T y)
{
	return(x > y)? x: y;
}

int main() {

	cout << myMax<int>(8, 19) << endl;
	cout << myMax<char>('a', 'b') << endl;
	return 0;
}


