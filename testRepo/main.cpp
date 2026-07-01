#include "gmock/gmock.h"
#include <iostream>

#ifdef _DEBUG
using namespace testing;
#endif

int main() {
#ifdef _DEBUG
	InitGoogleMock();
	return RUN_ALL_TESTS();
#else
	return 0;
#endif
}