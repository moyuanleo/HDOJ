#include<bits/stdc++.h>
int main(void) {
	int n;
	while (~scanf_s("%d", &n) && n) {
		int num = 0, sum = 1;
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &num);
			if (num % 2 == 1)
				sum *= num;
		}
		printf("%d\n", sum);
	}
	return 0;
}