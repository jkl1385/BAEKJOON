#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int N;
pair<int, int>* p;

int main() {
	cin >> N;
	p = new pair<int, int>[N];
	for (int i = 0; i < N; i++)
		cin >> p[i].first >> p[i].second;

	sort(p, p + N);

	for (int i = 0; i < N; i++)
		cout << p[i].first << ' ' << p[i].second << '\n';

	delete[] p;
	return 0;
}