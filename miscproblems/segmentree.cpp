#include <bits/stdc++.h>
using namespace std;
void buildtrre() {
	if (s == e) {
		tree[index] = a[s];
		return;
	}
	int mid = (s + e) / 2;

	buildtree(a, s, mid, tree, 2 * index);
	buildtree(a, mid + 1, e, tree, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;


}

int main()
{

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int *tree = new int[4 * n + 1];
	buildtree(a,0,n-1,tree,1);
	return 0;
}
