/**
 *	@Author - AryanRanjane 
 *	print pyramid of stars. 
 *
 */

// Header Files 
#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 
	int input;
	
	std::cout<<"Enter number of rows"; 
	std::cin>>input; 

	// Outter loop 
	for(int ole = 1; ole <=input; ole++) { 
		for(int ile = input; ile >= ole; ile--) {
			// Inner loop 
			std::cout<<" "; 
		}
		for(int index = 1; index <= ole; index++) {
			std::cout<<"* "; 
		}
		std::cout<<"\n"; 
	}
} 
