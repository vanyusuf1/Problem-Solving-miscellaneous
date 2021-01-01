#include<bits/stdc++.h>
using namespace std;

const int N = 10005, M = 22;
vector<int> gr[N];

void euler_tour1(int curr, int par) {
	cout << curr << " ";
	for (auto x : gr[cur]) {
		if (x != par) {
			euler_tour1(x, curr);
			cout << curr << " ";
		}

	}
	return ;
}

void solve() {
	int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
	cin >> n;
	for (i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		gr[x].pb(y);
		gr[y].pb(x);

	}
	euler_tour1(2, 0);

}
int main() {
	return 0;
}