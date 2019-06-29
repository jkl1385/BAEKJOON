#include <iostream>
using namespace std;

int main() {
	int t, m = 0, s = 0, N = 4;
	while (N--) {
		cin >> t;
		s += t;
	}

	while (s >= 60) {
		s -= 60;
		m++;
	}

	cout << m << '\n' << s << '\n';

	return 0;
}