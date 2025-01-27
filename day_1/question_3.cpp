/**
 *	@Author :- AryanRanjane 
 *	Print square pattern of N size
 */

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 
	
	int patternsize; 
	std::cin>>patternsize; 

	// Outter loop 
	for(int ole = 1; ole <= patternsize; ole++) {
		// Inner loop
		for(int ile = 1; ile <= patternsize; ile++) {
			std::cout<<"*"; 
		} 
		std::cout<<"\n"; 
	} 
}	
 
