#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        // int maxx = pow(2, n) - 1;

        long long int decimal_number = 0, p = 0;

        for (long long int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                decimal_number += pow(2, p);
            }
            p++;
        }

        // long long int mx = 0;

        // long long int yy = 0;

        // for (long long int i = 1; i <= n; i++)
        // {
        //     long long int copy = (decimal_number / pow(2, i));

        //     copy = copy ^ decimal_number;
        //     cout << yy << endl;
        //     // }
           
        // }
         int aniket = 0;
            for (int i = 0; i < n; i++)
            {
                aniket++;
                if (s[i + 1] == '0')
                {
                    break;
                }
                
            }
            cout<<aniket<<endl;
            }
        return 0;
    }
