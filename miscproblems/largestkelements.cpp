#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void query_print(priority_queue<int, vector<int>, greater<int>> pq) {
	while (!pq.empty()) {
		cout << pq.top() << ",";
		pq.pop();
	}
	cout << endl;
}
int main() {
	int no;
	int cs = 0;
	int k = 3;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (scanf("%d", &no) != EOF) {
		if (no == -1) {
			query_print(pq);
		}
		else if (cs < k) {
			pq.push(no);
		}
		else {
			if (no > pq.top()) {
				pq.pop();
				pq.push(no);
			}
		}
	}
	return 0;
}
