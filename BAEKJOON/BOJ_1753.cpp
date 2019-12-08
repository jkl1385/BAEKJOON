#include <iostream>
#include <queue>
using namespace std;
constexpr auto INF = 1000000000;

class Edge {
public:
	int destin;
	int weight;

	Edge(int d, int w) : destin(d), weight(w) {}
};

class Distance {
public:
	int vertex;
	int distance;

	Distance(int v, int d) : vertex(v), distance(d) {}
};

class Compare {
public:
	bool operator()(Distance& u, Distance& v) {
		return u.distance > v.distance;
	}
};

vector<Edge> g[20001];
int d[20001];
priority_queue<Distance, vector<Distance>, Compare> q;

void dijkstra(int start) {
	d[start] = 0;
	q.push({ start, 0 });
	while (!q.empty()) {
		int curV = q.top().vertex;
		int curD = q.top().distance;
		q.pop();
		if (curD > d[curV])
			continue;
		for (Edge& e : g[curV])
			if (curD + e.weight < d[e.destin]) {
				d[e.destin] = curD + e.weight;
				q.push({ e.destin, d[e.destin] });
			}
	}
}

int main() {
	int V, E, K, u, v, w;
	for (int& e : d)
		e = INF;

	cin >> V >> E >> K;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		g[u].push_back({ v, w });
	}

	dijkstra(K);

	for (int i = 1; i <= V; i++) {
		if (d[i] == INF)
			cout << "INF\n";
		else
			cout << d[i] << '\n';
	}

	return 0;
}