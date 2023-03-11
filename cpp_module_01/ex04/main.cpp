#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "parameters needed : filename, string1, string2" << std::endl;
		return 1;
	}

	std::string filename = *++argv;
	std::string s1 = *++argv;
	std::string s2 = *++argv;

	if(s1.empty())
	{
		  std::cout << "String 1 could not be empty !!" << std::endl;
		  return 1;
	}
	replace(filename, s1, s2);
	return 0;
}
