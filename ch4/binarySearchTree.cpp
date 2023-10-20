
// Skeleton of a binary search tree 


template<typename Comparable>
class BinarySearchTree 
{
	public:
		BinarySearchTree();
		BinarySearchTree(const & rsh);
		BinarySearchTree(const && rsh);
	        ~BinarySearchTree();

		const Comparable & findMin() const;
		const Comparable & findMax() const; 
		bool contains(const Comparable & x ) const; 
		bool isEmpty() const;
		void printTree( ostream & out = cout ) const;

		void makeEmpty( );
		void insert( const Comparable & x);
		void insert( const Comparable && x);
		void remove( const Comparable & x); 

		BinarySearchTree & operator=( const BinarySearchTree & rhs );
		BinarySearchTree & operator=( const BinarySearchTree && rhs );
		
	private:
	    	struct BinaryNode
		{
			Comparable element;
			BinaryNode *left;
			BinaryNode *right;

			BinaryNode(const Comparable & theElement, BinaryNode *lt, BinaryNode *rt )
				: element{ theElement}, left{lt}, right{rt} { } 

			BinaryNode(const Comparable & theElement, BianryNode *lt, BinaryNode *rt)
				: element{ std::move(theElement) }, left{lt}, right{rt} { } 	
		};

		BinaryNode *root;

		void insert(const Comparable & x, BinaryNode * & t);
		void insert(const && x, BinaryNode * & t);
		void remove(const Comparable & x, BinaryNode * & t); 
		BinaryNode * findMin(BinaryNode *t) const;
		BinaryNode * findMax(BianryNode *t) const; 
		bool contains(const Comparable & x, BinaryNode *t) const;
		void makeEmpty(BinaryNode *t, ostream & out) const;
		BinaryNode * clone(BinaryNode *t) const; 

}; 
