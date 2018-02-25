#include<iostream>
using namespace std; 
int main(){
	
	return 0; 
	
}





/*
FUnctions- 
- Kind of like functions in calc 
f: R -> R 
	domain codomain 

In c++ we dont have "real numbers" lke in math. 
Double- f(double); 
codomain    domain 
Important difference- 
1. C++ functions can have side effects 
	ex- Can print out standard output, change global variables 
	Hence, with same input might not give same output (get different things when you put a input that you expect to get the same)
	
	ex- int x= 0 //Global variables can be confusing sometimes they can tie many things together   
	
		int f(int y); // This function will take the y variable and perform it with the function 
	
		{return y*=x++} the output f this function will change every time it is tied to the global variable which will increment by 1. 
		 
		int main(){
			while(true){ 
				cout<<f(1)<<endl; *It will give a different output for the function*
				
		output- 0,1,2,3,4...
2. "Must have a concrete description of how to effectively compute the result 
	In a math world, this is fine: 
	f: R -> {0,1}
	f(x) = {1 if x is transcedental (but for c++ it does not work you have think about detais to compute the answer 
		   {0 else 
			This just says ehat f does, but not how. 
			
	How many functons are there from  A -> B? 
	What is | { f: A -> B } |
	Say A : { a1, a2, a3, ..., an} ( |A|= n) 
	How many choices do you have for f(a1)?
	Same for f(a2) , f(a3) 
///////////////////////////////////////////////
Even something like bool f(int x); 
has 2 ^(2^64)
