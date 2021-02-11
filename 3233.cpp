#include<bits/stdc++.h>
int main() {
	int T, n, cnt = 1, B;
	while (~scanf("%d%d%d", &T, &n, &B)) {
		if (T == 0 || n == 0 || B == 0) break;
		double s, p, sum = 0;
		while (T--) {
			scanf("%lf%lf", &s, &p);
			sum += s * (100 - p) * 0.01;
		}
		printf("Case %d: %.2f\n\n", cnt++, sum / (B * 1.0));
	}
	return 0;
}