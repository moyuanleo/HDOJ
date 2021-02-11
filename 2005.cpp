#include<bits/stdc++.h>
using namespace std;
bool isTrue(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	return false;
}
int main() {
	int year = 0, month = 0, day = 0;
	int mon[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//char a, b;
	//while (cin >> year && cin.get(a) && cin >> month && cin.get(b) && cin >> day)
	while (~scanf_s("%d/%d/%d", &year,&month,&day)) {
		int sum = 0;
		if (year >= 0 && year <= 9999 /*&& a == '/' && b == '/'*/) {
			if (isTrue(year) == 1)
				mon[1] = 29;
			else
				mon[1] = 28;
			if (month >= 1 && month <= 12) {
				if (mon[month - 1] >= day) {
					for (int i = 0; i < month - 1; i++)
						sum += mon[i];
					sum += day;
					printf("%d\n", sum);
				}
			}
		}
	}
	return 0;
}
