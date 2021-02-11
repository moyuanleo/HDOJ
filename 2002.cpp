#define PI 3.1415927
#include<bits/stdc++.h>
int main() {
	double r,v;
	while (~scanf_s("%lf", &r)) {
		v = 4.0 / 3.0 * PI * r * r * r;
		printf("%.3lf\n", v);
	}
	return 0;
}