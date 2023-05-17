#include <vector>
#include <string>
#include <iostream>
#include <fstream>

class Combinations
{
public:
	std::vector<std::string> userInput;
	std::string wordlist;
	Combinations(std::vector<std::string> userInputArgument);
	void CreateWordlist();
	void CreateCombinations(int level);
};

