#include<bits/stdc++.h>
using namespace std;
int a[1000001];
#define swap(a,b) {int temp=a;a=b;b=temp;}
int n, m;
void bubble_sort(){
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n - 1; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
}
int main() {
	while (~scanf_s("%d%d", &n, &m)) {
		for (int i = 1; i <= n; i++) scanf_s("%d", &a[i]);
		sort(a + 1, a + n + 1);
		for (int i = n; i >= n - m + 1; i--) {
			if (i == n - m + 1) printf("%d\n", a[i]);
			else printf("%d ", a[i]);
		}
	}
	return 0;
}