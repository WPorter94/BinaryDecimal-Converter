#include <bitset>


class Conversion {
private:
    std::bitset<32> binary;  // store the binary value
    int decimal;            // store the decimal value
    int numOfBits;        // minimum number of bits to store the binary value

public:
    void binaryToDecimal(std::bitset<32> m);  // set binary, decimal, and number of bits to the instant variables
    void binaryToDecimal(std::string m);  // set binary, decimal, and number of bits to the instant variables
    void decimalToBinary(int d);  // set binary, decimal, and number of bits to the instant variables
    std::bitset<32> getBinary();
    void setBinary(std::bitset<32> m);
    int getDecimal();
    void setDecimal(int d);
    int getNumBits();
    void setNumBits(int b);

};
