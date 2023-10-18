//  STD implementation
// Does the following code crashes ?

/**
 * Built container from start up but not including the end 
 */
 

template<typename Iterator>
void print(Iterator start, Iterator end, ostream & cout = cout)
{
	if(start == end)
	    return;

	out << *start++ << endl; // print an advanced start	
	print(start, end, out);   // Recursion is used 
}

template<typename ITerator>
void print(Iterator start, Iterator end, ostream & cout = cout)
{
	if(start == end)
		return;

	out << *start++ endl;   // Print an advanced start
}


