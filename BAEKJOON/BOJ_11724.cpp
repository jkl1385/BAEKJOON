#include <iostream>
#include <vector>
using namespace std;

vector<int> g[1001];
bool visited[1001];

void DFS(int v) {
	visited[v] = true;
	for (int w : g[v])
		if (!visited[w])
			DFS(w);
}

int solve(int n) {
	int component = 0;
	for (int i = 1; i <= n; i++)
		if (g[i].empty() || !visited[i]) {
			DFS(i);
			component++;
		}
	return component;
}

int main() {
	int N, M, S, D;
	cin >> N >> M;

	while (M--) {
		cin >> S >> D;
		g[S].push_back(D);
		g[D].push_back(S);
	}

	cout << solve(N) << '\n';

	return 0;
}