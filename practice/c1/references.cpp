// Explaining rvalues, lvalues and references 


// lvalue : Expresion that identifies a non - temporary object
// rvalue : Expression that identifies a temporary object not associated with any object 

// General rule -- lvalue : If you have a name for a variable, you have an lvalue 
// General rule -- rvalue : If the function call computes an expression that didn't exist prior to the call and its stored somewhere, you have an rvalue 


vector<string> arr(3);
const int x = 2;
int y;

int z = x + y;
string str = "foo";
vector<string> *ptr = &arr; 


// rvalues and lvalues references 

string str1 = "D";
string str2 = "Hell";
string & rstr = str1;
rstr += "o"


