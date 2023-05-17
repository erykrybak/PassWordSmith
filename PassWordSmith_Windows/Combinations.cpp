#include "Combinations.h"

Combinations::Combinations(std::vector<std::string> userInputArgument)
{
	Combinations::userInput = userInputArgument;
}

void Combinations::CreateWordlist()
{
    while (1) {
        std::cout << "\nSpecify wordlist file location (or press Enter to use default location): ";
        std::string wordlistCreateLocation;
        std::getline(std::cin, wordlistCreateLocation);

        if (wordlistCreateLocation.empty()) {
            wordlistCreateLocation = "wordlist.txt";
        }
        else {
            wordlistCreateLocation += "wordlist.txt";
        }

        std::ofstream file(wordlistCreateLocation);
        if (file.is_open()) {

            file.close();
            std::cout << "\nFile created successfully.\n";
            Combinations::wordlist = wordlistCreateLocation;
            break;
        }
        else {
            std::cout << "\nUnable to create the file.\n";
        }
    }
}

void Combinations::CreateCombinations(int level)
{
    std::ofstream MyFile(Combinations::wordlist);
    std::string temporary;
    for (int i = 0; i < Combinations::userInput.size(); i++) {
        temporary = Combinations::userInput[i];
        for (int j = 0; j < Combinations::userInput.size(); j++) {
            if (j == i) {
                continue;
            }
            else {
                temporary += Combinations::userInput[i];
            }
        }
    }
}
