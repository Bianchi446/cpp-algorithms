// Recursive implementation of findMin for binary search trees 

BinaryNode * findMin( BinaryNode *t ) const 
{
	if(t == nullptr)
		return nullptr;
	if( t-> left == nullptr )
		return t;
	return findMin( t->left );
}

BinaryNode * findMax( BinaryNode *t ) const
{
	if(t != nullptr )
		while(t->right != nullptr)
			t = t->right;
      	return t;	



}
