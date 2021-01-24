#include <bits/stdc++.h>
using namespace std;

class FindMedian
{
public:
	void insertHeap(int &);
	double getMedian();
private:
	double median; //Stores current median
	priority_queue<int> max; //Max heap for lower values
	priority_queue<int, vector<int>, greater<int> > min; //Min heap for greater values
	void balanceHeaps(); //Method used by insertHeap
};


// } Driver Code Ends

// Function to insert heap
void FindMedian::insertHeap(int &x)
{
	if (max.empty()) {
		max.push(x);
		return;
	}
	if (min.empty()) {
		min.push(x);
		return;
	}
	max.push(x);
	if (abs(max.size() - min.size()) > 1) {
		balanceHeaps();
	}
}

// Function to balance heaps
void FindMedian::balanceHeaps()
{
	min.push(max.top());
	max.pop();
}

// Function to return getMedian
double FindMedian::getMedian()
{
	double res = 0;
	if (max.size() > min.size())
		res =  max.top();
	else
		res = (max.top() + min.top()) / 2;
	return res;
}



// { Driver Code Starts.

int main()
{
	int n, x;
	FindMedian Ans;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		Ans.insertHeap(x);
		cout << floor(Ans.getMedian()) << endl;
	}
	// }
	return 0;
}  // } Driver Code Ends