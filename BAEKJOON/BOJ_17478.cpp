#include <iostream>
using namespace std;

void indent(int n) {
	for (int i = 0; i < 4 * n; i++)
		cout << '_';
}

void recur(int n, int p) {
	indent(n - p);
	cout << "\"����Լ��� ������?\"\n";
	if (!p) {
		indent(n - p);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	else {
		indent(n - p);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		indent(n - p);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		indent(n - p);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		recur(n, p - 1);
	}
	indent(n - p);
	cout << "��� �亯�Ͽ���.\n";
}

int main() {
	int N;
	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recur(N, N);

	return 0;
}