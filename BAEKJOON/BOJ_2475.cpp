#include <iostream>
using namespace std;

int main() {
	int n;
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		tot += n * n;
	}
	cout << tot % 10 << '\n';
	
	return 0;
}