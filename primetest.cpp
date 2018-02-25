/* n                                                                                                                 
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References: Brian Sukhnandan
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int n;
	bool prime =true;

	while(cin>>n){//asks for input after the program runs
		// after every loop it will reset the value of prime
		if (n<0){ //prime numbers can not be negatvie
			cout<<"Prime numbers are not negative"<<endl;
      prime = false;
		}
		else if(n==0 || n==1) { //prime numbers arent 0 or 1
			cout<<n<<" is not a prime number!"<<endl;
     prime= false;

		}
		for(int i=2;i<=(n-2);i++){//the for loop will start at 2 and go up to the inputted value
			if(n%i==0){ //if you mod n by i and see its 0 it will not be prime because it does not multiply by 1 and itself
				prime=false;}

	}
		if(prime==true){//if n turns out to be true then it will print 1
			cout<<"1"<<endl;
		}
		else{ // if the n value is not prime then it will print out 0
			cout<<"0"<<endl;
		}
		prime=true; //resets the values of prime so for the next loop it starts with a new value and will change depending on the statements

	}
	return 0;

}
#if 0 
#Upload: primetest.cpp
Type: application/octet-stream
Size: 1.5185546875 Kb
Upload complete. Save this receipt for your records:

SHA1: c8b31009284c97d399e48045f0b30dbbd5a30be4
Receipt: 30ec0d0e1d959d47fcaace87a3c67044020dbb8d
#endif 
