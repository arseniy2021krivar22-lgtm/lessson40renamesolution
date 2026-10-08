#include "logic.h"
string  get_order(int n, int m) {
	string result = to_string(n);
	int d = n < m ? 1 : -1;
	int count = abs(n - m) + 1;
	for (int i = 1; i < count; i++) {
		result += " " + to_string(n + i * d);
	}

	return result;
}
