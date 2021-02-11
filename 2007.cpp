#include<bits/stdc++.h>
int main(void) {
	int a, b;
	int sum_square, sum_cube;
	while (~scanf_s("%d%d", &a, &b)) {
		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		sum_square = 0, sum_cube = 0;
		for (int i = a; i <= b; i++) {
			if (i % 2 == 0)
				sum_square += pow(i, 2);
			if(i%2==1)
				sum_cube += pow(i, 3);
			}
		printf("%d %d\n", sum_square, sum_cube);
	}
	return 0;
}