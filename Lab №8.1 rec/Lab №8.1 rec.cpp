#include <iostream>
#include <string>

bool containsWhile(const std::string& input, const std::string& target, size_t targetIndex) {
    if (targetIndex == target.length()) {
        return true; 
    }

    if (input.find(target[targetIndex]) != std::string::npos) {
        return containsWhile(input, target, targetIndex + 1);
    }

    return false; 
}

bool containsWhile(const std::string& input) {
    std::string target = "while";
    return containsWhile(input, target, 0);
}

void replaceWhile(std::string& input, size_t pos) {
    if (pos == std::string::npos) {
        return; 
    }

    input.replace(pos, 5, "**");
    replaceWhile(input, input.find("while", pos + 2));
}

void replaceWhile(std::string& input) {
    replaceWhile(input, input.find("while"));
}

int main() {
    std::string inputString;

    std::cout << "Print line: ";
    std::getline(std::cin, inputString);

    if (containsWhile(inputString)) {
        std::cout << "String contains all letters from 'while'.\n";
    }
    else {
        std::cout << "String doesn`t contain all letters with 'while.\n";
    }

    replaceWhile(inputString);

    std::cout << "Result: " << inputString << std::endl;

    return 0;
}
