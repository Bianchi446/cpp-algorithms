

// C++ program to call a function in main 
#include <iostream> 
using namespace std; 
  
int add(int num1, int num2) 
{ 
    return (num1 + num2); 
} 
  
int main() 
{ 
    int num1 = 12, num2 = 34, num3 = 67, num4 = 12; 
  
    // The innermost add() is computed first, then middle 
    // add(), then the outermost add() 
    cout << add(add(add(num1, num2), num3), num4); 
  
    return 0; 
} 
