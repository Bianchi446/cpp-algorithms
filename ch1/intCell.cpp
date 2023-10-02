/**
 * A class for simulating an integer memory cell 
 */


class IntCell 
{
	public:
		// Construct the intCell; initial value is 0 
	  IntCell()
		{ storedValue = 0; }

		// Construct the intCell; initial value is initialValue
	  IntCell( int initialValue)
		{ storedValue = initialValue; }

		// return the stored value
	  int read()
	   	{ return storedValue; }

		// Change the stored value to x. 
	
	  void write( int x )
		{ storedValue = x; }


	private: 

	  int storedValue;		

};



