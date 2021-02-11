#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,m, n;
	while (~scanf_s("%d%d", &m, &n)) {
		int count = 0;
		for (int j = m; j <= n; ++j)
		{
			num = pow(j % 10, 3) + pow(j / 10 % 10, 3) + pow(j / 100, 3);
			if (num == j) {
				if (count != 0)
					cout << " " << j;
				else
					cout << j;
				count = 1;
			}
		}
		if(count==0){
			cout << "no";
		}
		cout << endl;
	}
	return 0;
}