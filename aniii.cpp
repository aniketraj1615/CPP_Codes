#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int z = 0;
        int one = 0;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                one++;
            }
        }
        // cout << z << " " << one << endl;
        if (z == n)
        {
            cout << "0" << endl;
        }
        else if (one == n)
        {
            cout << "1" << endl;
        }
        else if (one == z)
        {
            cout << z << endl;
        }
        else if (z > one || z < one)
        {
            cout << max(z, one) << endl;
        }
    }
    return 0;
}
