#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
#include "Conversion.h"
#include <string>
#include <bitset>


class newCxxTest : public CxxTest::TestSuite {
public:
	void test1BinaryToDecimalStr() {
		std::bitset<32> bset(20);
		Conversion conv1;
		conv1.binaryToDecimal(bset);
		TS_ASSERT_EQUALS(conv1.getDecimal(), 20);
	}
	void test2BinaryToDecimalBit() {
		std::string str1 = "101010";
		Conversion conv1;
		conv1.binaryToDecimal(str1);
		TS_ASSERT_EQUALS(conv1.getDecimal(), 42);
	}
	void test3DecimalToBinary() {
		int num1 = 40;
		Conversion conv1;
		conv1.decimalToBinary(num1);
		TS_ASSERT_EQUALS(conv1.getDecimal(), num1);
	}
	void test4GetNumBits() {
		int num1 = 20;
		Conversion conv1;
		conv1.setNumBits(num1);
		TS_ASSERT_EQUALS(conv1.getNumBits(), num1);
		
	}
	void test5SetNumBits() {
		int num1 = 50500;
		Conversion conv1;
		conv1.setNumBits(num1);
		TS_ASSERT_EQUALS(conv1.getNumBits(), num1);
	}
	void test6GetBinary() {
		std::bitset<32> bset(20);
		Conversion conv1;
		conv1.setBinary(bset);
		TS_ASSERT_EQUALS(conv1.getBinary(), bset);
	}
	void test7SetBinary() {
		std::bitset<32> bset(50500);
		Conversion conv1;
		conv1.setBinary(bset);
		TS_ASSERT_EQUALS(conv1.getBinary(), bset);
	}
	void test8GetDecimal() {
		int numTest = 20;
		Conversion conv1;
		conv1.setDecimal(numTest);
		TS_ASSERT_EQUALS(conv1.getDecimal(), numTest);

	}
	void test9SetDecimal() {
		int numTest = 50500;
		Conversion conv1;
		conv1.setDecimal(numTest);
		TS_ASSERT_EQUALS(conv1.getDecimal(), numTest);
	}
	void test10BinaryToDecimalString2() {
		Conversion conv1;
		conv1.binaryToDecimal("1010");
		TS_ASSERT_EQUALS(conv1.getDecimal(), 10);
	}
};
#endif /* NEWCXXTEST_H */