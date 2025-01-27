/**
 *	@Author :- AryanRanjane
 *	Print right angle pyramid 
 */

#include <iostream> 
using namespace std; 

int main()
{
	// Entry point function 
	
	int patternsize; 
	std::cin>>patternsize; 

	for(int ole = 1; ole <= patternsize; ole++) {
		for(int ile = 1; ile <= ole; ile++) {
			std::cout<<"*"; 
		} 
		std::cout<<"\n";
	}	
}

