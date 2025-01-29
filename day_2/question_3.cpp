/** 
 *	@Author - AryanRanjane
 *	Print even numbers from 1 to N 
 */

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 
	
	int input; 
	
	std::cout<<"Enter number"; 
	std::cin>>input;

	for(int le = 1; le <= input; le++) {
		if( le % 2 == 0) 
		{
			std::cout<<"\t"<<le; 
		}
	}
}

