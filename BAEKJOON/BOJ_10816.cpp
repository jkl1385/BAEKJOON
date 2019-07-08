#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, no;
	cin >> N;
	int* card = new int[N];
	for (int i = 0; i < N; i++) cin >> card[i];
	sort(card, card + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> no;
		cout << upper_bound(card, card + N, no) - lower_bound(card, card + N, no) << ' ';
	}

	delete[] card;
	return 0;
}

/*
int bin_search(int* c, int no, int l, int r) {
	int cnt = 0;
	while (l <= r) {
		int m = (l + r) / 2;
		if (c[m] < no) l = m + 1;
		else if (c[m] > no) r = m - 1;
		else {
			cnt++;
			cnt += bin_search(c, no, l, m - 1);
			cnt += bin_search(c, no, m + 1, r);
			break;
		}
	}
	return cnt;
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
		cout << bin_search(card, no, 0, N - 1) << ' ';
	}

	delete[] card;
	return 0;
} */