
#include "Combinations.h"

int main() {
    std::vector<std::string> userInput;
    std::cout << "Give me some of your data (type /d or press Enter to stop):\n";
    while (true) {
        std::string inputString;
        std::getline(std::cin, inputString);

        if (inputString == "/d" || inputString.empty()) {
            break;
        }

        userInput.push_back(inputString);
    }

    std::cout << "\nData entered:\n";
    for (const std::string& input : userInput) {
        std::cout << input << '\n';
    }

    Combinations mainObject(userInput);
    mainObject.CreateWordlist();
    mainObject.CreateCombinations(3);
}


