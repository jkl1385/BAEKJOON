#include <iostream>
#include <algorithm>
using namespace std;

int D[16], T[16], P[16], N;

int dp(int d) {
	if (d == N + 1) return 0;
	if (d > N + 1) return -1000;
	if (D[d] > 0) return D[d];
	return D[d] = max(P[d] + dp(d + T[d]), dp(d + 1));
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> T[i] >> P[i];
	
	cout << dp(1) << '\n';

	return 0;
}