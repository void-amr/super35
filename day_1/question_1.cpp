/**
 *	@Author - AryanRanjane 
 *	Print first N natural numbers from 1 to N 
 */

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point Function. 	
	int numberInput; 
	std::cin>>numberInput; 

	for(int le = 1; le <= numberInput; le++) 
	{
		// For loop block 
		std::cout<<le<<" "; 
	}
}

