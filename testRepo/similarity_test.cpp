#include "gmock/gmock.h"
#include "similarity.cpp"
#include <string>

using std::string;




TEST(Length, split) {
	LengthChecker lengthChecker;
	string inStr1 = "ASD", inStr2 = "DSA";
	int expect = 60;
	int actual = lengthChecker.comp(inStr1, inStr2);

	EXPECT_EQ(expect, actual);
}
TEST(Length, split2) {
	LengthChecker lengthChecker;
	string inStr1 = "A", inStr2 = "BB";
	int expect = 0;
	int actual = lengthChecker.comp(inStr1, inStr2);

	EXPECT_EQ(expect, actual);
}
TEST(Length, split3) {
	LengthChecker lengthChecker;
	string inStr1 = "AAABB", inStr2 = "BAA";
	int expect = 20;
	int actual = lengthChecker.comp(inStr1, inStr2);

	EXPECT_EQ(expect, actual);
}
TEST(Length, split4) {
	LengthChecker lengthChecker;
	string inStr1 = "AA", inStr2 = "AAE";
	int expect = 30;
	int actual = lengthChecker.comp(inStr1, inStr2);

	EXPECT_EQ(expect, actual);
}