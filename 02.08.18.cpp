#include<iostream>
#include<cmath>
using std::string;
using namespace std; 

int main(){
	#if 0
	int a,b,min; 
	cout<<"Enter a:"; 
	cin>>a; 
	cout<<"ENter b:"; 
	cin>>b; 
	if (a<b){
		min =a ;
	}
	else {
		min=b;
	}
	int d=min; 	 //d is the candidate for your GCD
	while((a%d!=0 || b%d!=0)){  //basicallys 
			d--;							//think about when should this process stop 
										// havent found gcd but as it goes down keep looking 
				
		
	}
	cout<<d;
#endif
/*
// Exercise- Find the exponent of 2 in the factorization of an interger:
// Example- if input=40 5 * 2^3 (and the highest power is 3) 
//                          a= 3^2 * 2^0 
//                           b = 3* 2	
Again we'll kind of use "brute force" to get the answer 
Idea- Start with 2^0 and keep multiplying by 2 until division has a remainder 
1<<k ==2^k takes the binary set of number and shift it to the left by how many numbers you want 
*/
	int n;
	//count the number of times 2 divides the input 
	// n = r* 2^k, r odd( so k==answer) 
	// divide the number by 2 until you get a odd number which is the highest power of 2 
	cin>>n; 
	int k= 0;//count the number of ties we divided by 2 
	while (n%2==0){
		n= n/2; //n/=2 shorthand 
		k++;
	} 
	cout<<n<<endl; //is the last odd number it multiplies with 2^k 
	cout<<k;//is to the power of 2^k 
	
	
	
	





	
	
	
	
	
	
	
	
	
	
	return 0; 
}





/* NOTES: 
- 	"Brute force" for GCD( greatest common divisor)
scd(a,b) = max ( d | and d |b) 
		   d E z
		        "there exists" 
Example- GCD( 6,9) = 3 
            2* 3  3*3 
            
Idea- start with the lagest candidate (min(a,b)) 
* Count backwards until the first common divisor is found. 
*/

