#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
	char op;
	cin >> A >> op >> B;

	int digitA = A.size() - 1;
	int digitB = B.size() - 1;

	if (op == '*') {
		cout << 1;
		for (int i = 0; i < digitA + digitB; i++) cout << 0;
	}
	else {
		if (digitA == digitB) {
			cout << 2;
			for (int i = 0; i < digitA; i++) cout << 0;
		}
		else {
			int min = digitA < digitB ? digitA : digitB;
			int max = digitA > digitB ? digitA : digitB;
			cout << 1;
			for (int i = 0; i < max - min - 1; i++) cout << 0;
			cout << 1;
			for (int i = 0; i < min; i++) cout << 0;
		}
	}

	cout << "\n";

	return 0;
}