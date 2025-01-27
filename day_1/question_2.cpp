/** 
 *	@Author:- AryanRanjane
 *	Print sum of first N natural numbers
 */ 

#include <iostream> 
using namespace std; 

int main() 
{
	// Entry point function 
	
	int input;
	std::cin>>input; 

	// Natural numbers -> numbers that are positive numbers 
	// Sum -> we can multiply the current number with n * (n+1)/2 ? 
	// Why ? 
	/*
	 *	Let's imagine two rows where in 
	 *
	 *	1st row -> 1 2 3 4 5 6 -> ascending order 
	 *	2nd row -> 6 5 4 3 2 1 -> descending order
	 *		-----------------
	 *		   7 7 7 7 7 7 
	 *
	 *		   Every thin add's up to if we multiply both the value with time's the number has been summed up to 7 
	 *		   we get 7 x 6 -> 42 
	 *
	 *		   but we want sum of one row not two rows 
	 *		   divide the value with 2 
	 *
	 *		   42/2 -> 21 
	 *
	 */ 
	 
	 int sum_of_natural_numbers = input * (input + 1) / 2; 	
	 std::cout<<sum_of_natural_numbers; 
} 
