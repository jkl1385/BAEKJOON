#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> g[1001];
queue<int> q;
bool visited[1001];

class Graph {
public:
	Graph() {}

	void insertEdge(int origin, int destin) {
		g[origin].push_back(destin);
		g[destin].push_back(origin);
	}

	void DFS(int v) {
		visited[v] = true;
		cout << v << ' ';
		for (int w : g[v])
			if (!visited[w])
				DFS(w);
	}

	void BFS(int v) {
		q.push(v);
		visited[v] = true;
		cout << v << ' ';
		while (!q.empty()) {
			int u = q.front();
			q.pop();
			for (int w : g[u]) {
				if (!visited[w]) {
					q.push(w);
					visited[w] = true;
					cout << w << ' ';
				}
			}
		}
	}
};

void reset() {
	for (bool& x : visited)
		x = false;
}

int main() {
	Graph G;
	int N, M, V, S, D;
	cin >> N >> M >> V;

	while (M--) {
		cin >> S >> D;
		G.insertEdge(S, D);
	}

	for (auto& v : g)
		sort(v.begin(), v.end());

	G.DFS(V);
	cout << '\n';
	reset();
	G.BFS(V);
	cout << '\n';

	return 0;
}