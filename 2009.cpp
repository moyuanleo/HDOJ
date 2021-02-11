#include<bits/stdc++.h>
int main(void) {
	double n, m,sum;
	while (~scanf_s("%lf%lf", &n, &m)) {
		sum = 0.0;
		while(m--) {
			sum += n;
			n = sqrt(n);
		}
		printf("%.2f\n", sum);
	}
	return 0;
}