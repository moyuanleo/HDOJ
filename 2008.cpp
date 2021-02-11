#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int below, just, over,n;
	while (~scanf_s("%d", &n)&&n!=0) {
		below = just = over = 0;
		for(int i = 0;i < n;i++) {
			double x;
			scanf_s("%lf",&x);
			if (x < 0)
				below++;
			else if (x == 0)
				just++;
			else if (x > 0)
				over++;
		}
		printf("%d %d %d\n", below,just,over);
	}
	return 0;
}