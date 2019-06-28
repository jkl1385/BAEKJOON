#include <iostream>
#include <algorithm>
using namespace std;

int C[1001][3], D[1001][3], N;

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> C[i][0] >> C[i][1] >> C[i][2];

	for (int i = 1; i <= N; i++) {
		D[i][0] = min(D[i - 1][1], D[i - 1][2]) + C[i][0];
		D[i][1] = min(D[i - 1][0], D[i - 1][2]) + C[i][1];
		D[i][2] = min(D[i - 1][0], D[i - 1][1]) + C[i][2];
	}

	cout << min(min(D[N][0], D[N][1]), D[N][2]) << '\n';

	return 0;
}