#include<bits/stdc++.h>
int main() {
	double q,p;
	while (~scanf_s("%lf", &q)) {
		if (q >= 0)
			p = q;
		else
			p = -q;
		printf("%.3lf\n", p);
	}
	return 0;
}