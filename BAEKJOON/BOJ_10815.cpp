#include <iostream>
#include <algorithm>
using namespace std;

int bin_search(int no, int* c, int n) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (c[m] == no) return 1;
		else if (c[m] < no) l = m + 1;
		else r = m - 1;
	}
	return 0;
}

int main() {
	int N, M, no;
	cin >> N;
	int* card = new int[N];
	for (int i = 0; i < N; i++) cin >> card[i];
	sort(card, card + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> no;
		cout << bin_search(no, card, N) << ' ';
	}

	delete[] card;
	return 0;
}