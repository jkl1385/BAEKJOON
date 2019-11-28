#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int house[26][26];
bool visited[26][26];
int member[170];
int N;

bool inRange(int x, int y) {
	return x >= 1 && x <= N && y >= 1 && y <= N;
}

int search(int x, int y) {
	int m = 1;
	visited[x][y] = true;
	for (int p = 0; p < 4; p++)
		if (inRange(x + dx[p], y + dy[p]) && house[x + dx[p]][y + dy[p]] && !visited[x + dx[p]][y + dy[p]])
			m += search(x + dx[p], y + dy[p]);
	return m;
}

int solve() {
	int group = 0;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			if (house[i][j] && !visited[i][j]) {
				int m = search(i, j);
				member[++group] = m;
			}
	return group;
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			scanf("%1d", &house[i][j]);
	
	int group = solve();
	cout << group << '\n';
	sort(member, member + group + 1);
	for (int i = 1; i <= group; i++)
		cout << member[i] << '\n';

	return 0;
}