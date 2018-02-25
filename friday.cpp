#include <iostream>
using namespace std; 
int main()
/*
02-16-18- Notes:
	A compelex problem is often easier to olve by dividing it into several smaller parts, 
each of which can be solved by itself. 
These parts are sometimes made into functions in C++. 
- The functon main() uses type int and returns an integer (return 0;) 
- main() uses functions when called, and can solve the problem using them. 
 Advantage of functions: 
 A function is kept seperate by limitations, unless they are included within the function itself. 
 Functions also separate the concept from the implementation (how its done) 
 Functions can help make the progra easier to understand, and they can be reused. 
 
 Syntax: 
 "return type (value) " "function name" (<parameter list>) }
 	(function body)
	 (some code for your function) 
	 (your local statements) 

} 
example- 
int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}
	
