#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int p = 1;
    while (t--)
    {
        cout << "Case #" << p << ":"
             << " ";
        p++;
        int l, n;
        cin >> l >> n;
        int sum = 0;
        while (n--)
        {
            int a;
            char ch;
            cin >> a >> ch;
            if (ch == 'c')
            {
                sum += a;
            }
            else
            {
                sum -= a;
            }
        }
        cout << abs(sum) / l << endl;
    }
    return 0;
}