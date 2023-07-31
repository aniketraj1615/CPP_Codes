#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = 1;
        int a = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i == j || j == 1)
            {
                cout << "1"
                     << " ";
            }
            else
            {
                if (i % 2 != 0)
                {
                    if (j <= (i / 2 + 1))
                        cout << j << " ";
                    else
                    {
                        cout << (i / 2 + 1 - k) << " ";
                        k++;
                    }
                }
                else
                {
                    if (j <= i / 2)
                        cout << j << " ";
                    else
                    {
                        cout << (i / 2 - a) << " ";
                        a++;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}