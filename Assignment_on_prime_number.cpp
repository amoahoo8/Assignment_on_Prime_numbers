#include <iostream>
using namespace std;

void prime(int x);


int main () {
	
	int number = 0;
	
	
	cout << " Enter the number : " <<endl;
	cin >>number;
	
	system ( " cls"); // clearing the console after entering the number
	
	prime(number); // calling the prime function
	
	
	return 0;
}


// beggining of the prime function
void prime ( int x){

	 int sum = 0;
	 
	 for( int i = x; i > 0; i--){
	 	bool not_prime = false;
	 	for( int j = 2; j < i; j++){
	 		
	 		if( i % j == 0)
			 {
	 			not_prime = true;
	 			j = i;
			 }
		 }
		 if( not_prime == false){
		 	
		 	cout << i <<endl;  // displaying all the prime numbers within the given range
		 	
		 	sum = sum + i;  // summation of all the prime numbers
		 }
	 }	
	
	cout<< " The numbers above are Prime numbers wihin the range " <<endl;
	
	
	cout << " The sum of all the prime numbers within the range is : " <<sum <<endl;
}

// end of the prime function
