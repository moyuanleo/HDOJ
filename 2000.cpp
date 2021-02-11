#include<bits/stdc++.h>
using namespace std;
int main() {
	char a, b, c;
	char x[3];
	while (~scanf_s("%c%c%c", &a, &b, &c)) {
		getchar();
		x[0] = a;
		x[1] = b;
		x[2] = c;
		sort(x, x + 3);
		printf("%c %c %c\n", x[0], x[1], x[2]);
	}
	return 0;
}