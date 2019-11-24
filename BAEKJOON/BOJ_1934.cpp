#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main() {
	int T, A, B;
	cin >> T;

	while (T--) {
		cin >> A >> B;
		cout << A * B / gcd(A, B) << '\n';
	}

	return 0;
}