#include <iostream>
#include <stdio>
std::cout
std::list 
std::endl


template<typename Container & typename Object>
void change(Container & c, const Object & newValue)	// The parameters are : A container that hold objects; an object with a new value
{
	typename Container::iterator itr = c.begin();
	wile( itr != c.end() )
		*itr++ = newValue;
}	


