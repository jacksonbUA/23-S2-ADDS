#include "Reverser.h"
#include <iostream>

    Reverser::Reverser() {}

    int Reverser::reverseDigitHelper(int value, int acc) {
        if (acc == 0) {
            return value;
        }

        else {

            return reverseDigitHelper(stoi(std::to_string(value).insert(std::to_string(value).length() - acc, std::to_string(value % 10)).substr(0, std::to_string(value).length())), acc - 1); 
        }
        
    }

    int Reverser::reverseDigit(int value) {

        if (value < 0) {
            return -1;
        }

        return reverseDigitHelper (value, std::to_string(value).length());
        
    }


    //tried to do this without variable assignment 
    std::string Reverser::reverseStringHelper(std::string characters, int acc) {

        if (acc == 0) {
            return characters;
        }

        else {
        
        std::string toReturn = characters.insert(characters.length() - acc, 1, characters.back());
        toReturn.pop_back();
        std::cout << toReturn << "\n";
        return reverseStringHelper(toReturn, acc - 1);

        }

    }

    std::string Reverser::reverseString(std::string characters) {
        return reverseStringHelper (characters, characters.length());

    }

    

