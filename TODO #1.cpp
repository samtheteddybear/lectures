#include <iostream>
using namespace std; 

int main(){
	int x; //total;
	double total; 
	for (int i=0;i<5;i++){
		cout<<"Please enter a value: ";
		cin>>x;
		total+=x;
	}
	cout<<"The total value of x is "<<total<<endl; 
	cout<<"The average of the 5 integers inputted is = "<<total/5<<endl; 

	return 0; 
	
}

	/*
	cout<<"Enter the value of x: "; 
	cin>>x; 
	cout<< "Enter the value of y: ";
	cin>>y; 
	cout<<"Enter the value of z: ";
	cin>>z;
	cout<<"The average of x, y, z is "<<(x+y+z)/3<<endl; 
	*/
