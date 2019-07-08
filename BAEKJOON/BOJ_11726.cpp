#include <iostream>
using namespace std;

int D[1001] = { 1, 1 };

int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		D[i] = D[i - 1] + D[i - 2];
		D[i] %= 10007;
	}

	cout << D[n] << '\n';

	return 0;
}