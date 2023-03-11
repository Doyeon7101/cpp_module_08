#include "replace.hpp"
#include <iostream>

void	replace_line(std::string line, std::string s1, std::string s2)
{
	size_t pos = line.find(s1, 0);
	while (pos < line.length())
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.size());
	}
}


void	replace(std::string& filename, std::string& s1, std::string& s2)
{
	std::ifstream readFile(filename);
	if(!readFile)
	{
		std::cerr << "cannot open file" << std::endl;
		exit(1);
	}

	std::string outFileName(filename + ".replace");
	std::ofstream outFile(outFileName.c_str());
	if (outFile.fail())
	{
		std::cerr << "OutFile open failed!" << std::endl;
		exit(1);
	}

	while (readFile) //ascii reading
	{
		std::string line;
		getline(readFile, line);
		if(readFile.bad())
		{
			std::cerr << "Error while reading input files" << std::endl;
		}
		replace_line(line, s1, s2);
		outFile << line << std::endl;

		outFile.close();
	}
}
