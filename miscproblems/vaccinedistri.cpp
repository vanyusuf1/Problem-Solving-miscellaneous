#include<bits/stdc++.h>
using namespace std;
int main()
{	int test;
	cin >> test;
	while (test > 0)
	{	int i, n, d, a[10000000], risk = 0, riskfree = 0, count = 0;
		cin >> n >> d;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if (d == 1)
		{
			cout << n << "\n";
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				if (a[i] >= 80 || a[i] <= 9)
					risk++;
			}
			riskfree = n - risk;
			while (risk >= 0)
			{	if (risk > 0) count++;
				risk = risk - d;

			}
			while (riskfree >= 0)
			{	if (riskfree > 0) count++;

				riskfree = riskfree - d;
			}
			cout << count << "\n";
		}
		test--;
	}
	return 0;
}