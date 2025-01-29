/** 
 *	@Author - AryanRanjane 
 *	Print factorial of number
 */ 

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 
	
	int input; 

	std::cout<<"Enter number";
	std::cin>>input; 

	for(int le = input-1; le >= 1; le--) {
		input = input * le;
	}		
	std::cout<<input;

}


