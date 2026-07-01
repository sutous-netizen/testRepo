#include <string>

using std::string;

class LengthChecker {
public:
	int comp(string inStr1, string inStr2) {
		double result = 0;
		length1 = inStr1.length();
		length2 = inStr2.length();
		if (length1 >= length2 * 2
			|| length1 * 2 <= length2) {
			return static_cast<int>(result);
		}
		else {
			double gap = length1 >= length2 ? length1 - length2 : length2 - length1;
			double minLenth = length1 >= length2 ? length2 : length1;
			result = (1 - gap / minLenth) * 60;
			return static_cast<int>(result);
		}
	}
private:
	int length1;
	int length2;
};  