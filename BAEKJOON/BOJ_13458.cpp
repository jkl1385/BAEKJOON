#include <iostream>
#include <cmath>
using namespace std;

int N, B, C;
int A[1000000];

long long solve() {
	long long res = N;
	for (int i = 0; i < N; i++) {
		int x = A[i] - B;
		if (x > 0)
			res += (int)(ceil(x / (double)C));
	}
	return res;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cin >> B >> C;

	cout << solve() << '\n';

	return 0;
}