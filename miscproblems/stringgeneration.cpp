#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        char ch = 'a';

        while ( n > k)
        {

            for (int i = 0; i < k; i++) {
                cout << ch;
            }
            n = n - k;
            ch = ch + 1;
            if (ch == 'd')
                ch = 'a';
        }
        while (n > 0)
        {
            if (ch == 'd')
                ch = 'a';
            else ch + 1;

            cout << ch;
            n--;
        }
        cout << endl;

    }

}
