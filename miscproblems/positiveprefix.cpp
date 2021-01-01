#include <bits/stdc++.h>
using namespace std;
int main()

{ int test;
  cin >> test;
  int n, k, cumm = 0, diff = 0;
  signed int arr[1001];
  int i;
  while (test > 0)
  {
    cin >> n >> k;
    for (i = 0; i <= n; i++)
    {
      arr[i] = i + 1;
    }
    if (n % 2 == 0)
    {
      for (i = 0; i <= n; i++)
      {
        if (arr[i] % 2 == 1) {
          arr[i] = (-arr[i]);
        }

      }

    }
    else if (n % 2 == 1)
    {
      for (i = 0; i <= n; i++)
      {
        if (arr[i] % 2 == 0) {
          arr[i] = (-arr[i]);
        }
      }

    }
    int cnt = 0;
    for (i = 0; i <= n; i++)
    {
      if (arr[i] > 0) {
        cnt++;
      }
    }
    if (k > cnt) {
      diff = k - cnt;
      for (i = n - 1; i >= 0; --i)
      {
        if (diff > 0 && arr[i] < 0)
        {
          arr[i] = abs(arr[i]);
          diff--;
        }
      }

    }
    else if (cnt > k) {
      diff = cnt - k;
      for (i = n - 1; i >= 0; --i)
      {
        if (diff > 0 && arr[i] > 0)
        {
          arr[i] = (-arr[i]);
          diff--;
        }
      }

    }

    for (i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }

    cout << "\n";
    test--;
  }
  return 0;
}