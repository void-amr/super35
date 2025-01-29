/**
 *	@Author - AryanRanjane
 *	Print multiplication table for a number n 
 *
 */

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 
	
	int input; 
	
	std::cout<<"Enter number"; 
	std::cin>>input;

	for(int le = 1; le <= 10; le++) {
	std::cout<<"\t"<<le*input; 
	}	
} 
