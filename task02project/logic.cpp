#include "logic.h"

string get_order(int n, int m) {
	if (m == n && m % 2 == 0) {
		return "";
	}

	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}


	if (m % 2 == 0) {
		m--;
	}

	string result = to_string(m);



	for (int i = m - 2; i >= n; i -= 2) {
		result += " " + to_string(i);

	}

	

	return result;
}