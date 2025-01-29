/**
 *	@Author - AryanRanjane	 
 *	Print hollow square
 */

#include <iostream> 
using namespace std; 

int main()
{
	// Entry point function 
	int input; 
	
	std::cout<<"Enter numbers ";
	std::cin>>input; 
 
	// Outter for loop 
	for(int ole = 0; ole < input; ole++) {
		for(int ile = 0; ile < input; ile++) {
			// Inner for loop 
			if( ole == 0 || ole == input - 1) {
				std::cout<<"*"; 
			} else if (ile == 0 || ile == input-1) {
				std::cout<<"*";
			} else {
				std::cout<<" ";
			}	
		}
		std::cout<<"\n"; 
	}
}

