// Pseudo - code to list a directory in a hierarchical file system 


/*
void filesystem::ListAll(int depth = 0 ) const 
{
	printName(depth);
	if(isDirectory() )
	    for each file c in this directory
		    c.listAll(depth + 1);
}
*/


// Pseudo - code to calculate the size of a root directory 


/*
int FileSytem::size() const
{
	int totalSize = sizeOfThisFile();

	if( isDirectory() )
		for each file c in this directory
			totalSize += c.size();
	return totalSize;
}
*/


// Pseudo - code to implement a expression tree 

/*
struct BinaryNode 
{
	Object Element;
	BinaryNode *leftNode;
	BinaryNode *rightNode; 
	
}
*/


