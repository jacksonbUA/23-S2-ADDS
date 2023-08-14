#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {

    private:

    public:
    Reverser();
    int reverseDigit(int value);
    int reverseDigitHelper(int value, int acc);
    std::string reverseString(std::string characters);
    std::string reverseStringHelper(std::string characters, int acc);


};
#endif