/**
 *	@Author - AryanRanjane 
 *	Print number in reverse order 
 */

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 

	int input; 
	std::cin>>input; 

	for(int le = input; le >0; le--) {
		std::cout<<le<<" "; 
	}
} 
