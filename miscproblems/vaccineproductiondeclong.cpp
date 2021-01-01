#include<bits/stdc++.h>
using namespace std;
int main() {
	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int ans = 0;
	int cnt = 0;
	if (d1 == d2 && d1 == 1) {
		while (ans < p) {
			ans += (v1 + v2);
			cnt++;
		}
		cout << cnt << endl;
	}
	else {
		cnt = min(d1, d2) - 1;
		while (ans < p) {
			if (d1 > d2) {
				ans += v2;
				d2++;
			}
			else if (d2 > d1) {
				ans += v1;
				d1++;
			}
			else if (d1 == d2) {
				ans += (v1 + v2);
			}
			cnt++;
		}
		cout << cnt << endl;
	}

}