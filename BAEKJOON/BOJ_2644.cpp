#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> g[101];
int kin[101];
bool visit[101];
queue<int> q;

void BFS(int v) {
	q.push(v);
	visit[v] = true;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int w : g[u])
			if (!visit[w]) {
				kin[w] = kin[u] + 1;
				q.push(w);
				visit[w] = true;
			}
	}
}

int main() {
	int N, M, A, B, X, Y;

	cin >> N >> A >> B >> M;
	while (M--) {
		cin >> X >> Y;
		g[X].push_back(Y);
		g[Y].push_back(X);
	}

	BFS(A);
	
	if (kin[B])
		cout << kin[B] << '\n';
	else
		cout << "-1\n";

	return 0;
}