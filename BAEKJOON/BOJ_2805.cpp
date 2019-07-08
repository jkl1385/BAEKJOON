#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int* tree = new int[N];
	for (int i = 0; i < N; i++) cin >> tree[i];
	sort(tree, tree + N);

	int left = 0, right = tree[N - 1], max, mid;
	long long length;
	while (left <= right) {
		mid = (left + right) / 2; length = 0;
		for (int i = 0; i < N; i++) length += tree[i] <= mid ? 0 : tree[i] - mid;
		if (length >= M) { left = mid + 1; max = mid; }
		else right = mid - 1;
	}

	cout << max << '\n';

	return 0;
}