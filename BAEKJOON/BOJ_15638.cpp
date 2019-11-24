#include <iostream>
using namespace std;

bool check[100001];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%*d");

	for (int i = 2; i * i <= N; i++) {
		if (check[i])
			continue;
		for (int j = i + i; j <= N; j += i)
			check[j] = true;
	}
	
	if (check[N])
		cout << "No\n";
	else
		cout << "Yes\n";

	return 0;
}