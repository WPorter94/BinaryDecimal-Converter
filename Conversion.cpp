#include "Conversion.h"
#include <bitset>
#include <iostream>
#include <string>


void Conversion::binaryToDecimal(std::bitset<32> m) {
	this->setNumBits(m.count());
	this->setBinary(m);
	unsigned long decimal = m.to_ulong();
	this->setDecimal(decimal);
}  // set binary, decimal, and number of bits to the instant variables
void Conversion::binaryToDecimal(std::string m)
{
	std::bitset<32> bset ((std::string)m);
	this->setBinary(bset);
	int nBits = bset.count();
	this->setNumBits(nBits);
	unsigned long decimal = bset.to_ulong();
	this->setDecimal(decimal);

} // set binary, decimal, and number of bits to the instant variables
void Conversion::decimalToBinary(int d) {
	std::bitset<32> bset(d);
	this->setBinary(bset);
	this->setNumBits(bset.count());
	this->setDecimal(d);
}// set binary, decimal, and number of bits to the instant variables
std::bitset<32> Conversion::getBinary() {
	return this->binary;
}
int Conversion::getDecimal() {
	return this->decimal;
}
int Conversion::getNumBits() {
	return this->numOfBits;
}
void Conversion::setNumBits(int b) {
	this->numOfBits = b;
}
void Conversion::setDecimal(int d) {

	this->decimal = d;
}

void Conversion::setBinary(std::bitset<32> m) {

	this->binary = m;
}
