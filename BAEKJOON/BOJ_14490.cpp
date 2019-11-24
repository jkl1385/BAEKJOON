#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main() {
	char A[10], B[10];
	scanf("%[^:]%*c%s", A, B);
	int g = gcd(atoi(A), atoi(B));
	printf("%d:%d", atoi(A) / g, atoi(B) / g);

	return 0;
}