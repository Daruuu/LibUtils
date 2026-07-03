#include <iostream>
#include "../include/utils/text.hpp"


int main()
{
	std::cout << "LibUtils works! :)\n" ;
	std::cout << "TO_UPPER:)\n" ;

	std::cout << utils::to_upper("heLlo") << std::endl;
	return 0;
}
