#include <iostream>
#include <string>
using namespace std;

int cnt[26];

int main() {
	string S;
	cin >> S;

	for (char c : S)
		++cnt[c - 'a'];
	for (int n : cnt)
		cout << n << ' ';

	return 0;
}