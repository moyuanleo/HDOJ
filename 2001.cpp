#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
int main() {
	double x1, y1, x2, y2;
	double x;
	while (~scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2)) {
		x = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		printf("%.2lf\n", x);
	}
	return 0;
}