#include <iostream>
#include "include/random.hpp"

int main()
{
	//Values range constructor
	random rand(0, 10);

	std::cout << "------ the generation range from " << rand.min() <<
		" to " << rand.max() << " ------" << std::endl;

	//--- the min max pair of LONG LONG type ---
   //const auto minmax = rand.minmax();

	std::cout << std::endl;

	std::cout << "Random value of int type:\t" << rand.get_int() << std::endl;
	std::cout << "Random value of double type:\t" << rand.get_double() << std::endl;
	std::cout << "Random value of long long type:\t" << rand.get_longlong() << std::endl;

	rand.set_range(0, 1000);

	std::cout << std::endl;
	std::cout << "------ the generation range from " << rand.min() <<
		" to " << rand.max() << " ------" << std::endl;
	std::cout << std::endl;

	std::cout << "Random value of int type:\t" << rand.get_int() << std::endl;
	std::cout << "Random value of double type:\t" << rand.get_double() << std::endl;
	std::cout << "Random value of long long type:\t" << rand.get_longlong() << std::endl;
	return 0;
}