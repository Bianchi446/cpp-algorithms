// Implementing a int memory cell 

#include <iostream>

class intCell
{
	public:
		intCell()
			{storedValue = 0;}
		intCell(int initialValue)
			{storedValue = initialValue;}

		int read()
			{return storedValue;}

		void write(int x)
			{return storedValue = x;}

	private: 
		int storedValue;
};


// Implementing a int memory cell with initialization list 



class intCell
{
	public:
		explicit intCell(int initialValue = 0) 
			: storedValue{initialValue} { }
		int read() const
			{return storedValue; }
		int write(int x) 
			{return storedValue = x; }

	private:
		int storedValue;

};


