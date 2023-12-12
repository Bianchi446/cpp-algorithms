// Implementation of the BianrySearchTree 

template<typename Comparable>
class BinarySearchTree
{
	public:
		// Constructors 
		BinarySearchTree();
		BinarySearchTree(const & rhs);
		BinarySearchTree(const && rhs);
		~BinarySearchTree();

		// Method definitions
		const Comparable & findMin() const;
		const Comparable & findMax() const;
		bool contains(const Comparable & x) const;
		bool isEmpty() const; 
		void printTree( ostream & out = cout ) const;


		void makeEmpty( );
		void insert( const Comparable & x );
		void insert( const Comparable && x );
		void remove( const Comparable & x);

		// Operator overloading 
		
		BinarySearchTree & operator=(const BinarySearchTree & rhs);
		BinarySearchTree & operator=(const BinarySearchTree && rhs);


	private:

		struct BinaryNode
		{
			Comparable Element;
			BinaryNode *left;
			BinaryNode *right; 

			BinaryNode(const Comparable & theElement. BinaryNode *lt, BinaryNode *rt) 
				: element {theElement}, left{ lt }, right{ rt } { }

			BinaryNode(const Comparable && theElement, BinaryNode *lt, BinaryNode *rt)
				: element {theElement}, left{ lt }, right{ rt } { }
		};

		BinaryNode *root;

		void insert( const Comparable & x, BinaryNode * & t );
		void insert( Comparable && x, BinaryNode * & t);
		void remove( const Comparable & x, BinaryNode * & t );
		BinaryNode * findMin( BinaryNode *t ) const; 
		BinaryNode * findMax( BinaryNode *t ) const; 
		bool contains( const Comparable & x, BinaryNode *t) const; 
		void makeEmpty( BinaryNode * & t);
		void printTree( BinaryNode *t, ostream & out ) const; 
		BinaryNode * clone(BinaryNode *t ) const; 
};


bool contains(const Comparable & x, BinaryNode *t) const
{
	if( t == nullptr )
		return false;
	else if( x < t->element )
		return contains(x , t->left);
	else if(t->element < x)
		return contains(x, t->right);
	else
		return true;         // Match
}

void insert(const Comparable & x)
{
       	insert(x, root);
}

void remove(const Comprable & x)
{
       	remove(x, root);
}

~                                              
