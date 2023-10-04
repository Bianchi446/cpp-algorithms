/*
 * A Class for simulating an integer memory cell
 * */


class intCell 
{

	public:
	  explicit intCell( int initialValue = 0) 
	    : storedValue{ initialValue } { } 
	  int read() const 
	  	{ return storedValue; }
	  void write( int x) 
		{ storedValue = x; }

	private:
	  int storedValue; 

};
