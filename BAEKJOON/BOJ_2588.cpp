#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	cout << n1 * (n2 % 10) << '\n'
		<< n1 * (n2 % 100 / 10) << '\n'
		<< n1 * (n2 / 100) << '\n'
		<< n1 * n2 << '\n';

	return 0;
}