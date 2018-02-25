#include <iostream>
using namespace std; 
using std::cin;

/* TODO from Data tyes-
int main(){
// TODO #1 from Data types:
	#if 0 
	int x, y, z; //for dividing the average value wont be in decmials
	cout<<"Input your first value: "<<endl; 
	cin>>x; 
	cout<<"Input your second value: "<<endl;
	cin>>y; 
	cout<<"Input your third value: "<<endl; 
	cin>>z; 
	cout<<"Your average value is "<< (x+y+z)/3.0<<endl;//to get values in decimals make sure you have double or the integer ends with n.0
	//n- is an integer   
	return 0; 
#endif 
//TODO #2 from Data Types:
	double input, total=0;
	
	for (int i=0; i<5;i++)
	{
		cout<<"Enter a value: "<<endl; 
		cin>>input; 
		total+=input; 
		
	}
	
	cout<<"Your total value is "<<total<<endl; 
	cout<<"Your average value is "<<total/5.0<<endl; 
	
	return 0; 	
	
}*/
/* TODOS #2 (if-while.cpp) 
*/
int main(){
	int input, total=1;
	cout<<"In order to stop asking for values type q for the following input"<<endl;
	while( cin>>input){
		total*=input;//to multiply another input make sure your first set value is set to 1 so you can multiply itself at first input then after the
		//second input it will multiply to that first input 
		
		
	}
	cout<<"Total: "<<total<<endl;
	
	return 0; 
	
}
