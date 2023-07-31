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
        string s;
        cin >> s;
        int max = pow(2, n) - 1;

        int i, decimal_number = 0, p = 0;

        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                decimal_number += pow(2, p);
            }
            p++;
        }
// cout<<"max before "<<max<<endl;
        max = max ^ decimal_number;
        // cout<<"max after "<<max<<endl;
        if (max == 0)
        {
            cout << n << endl;
        }
        else{
        // {cout<<decimal_number<<endl;
        // cout<<max<<endl;
            // cout<<(decimal_number / max)<<endl;
            // int y = log2(decimal_number / max);
            int y=0;
            while(max<(decimal_number/pow(2,y))){
                y++;
            }

            cout << y-1<< endl;
        }
    }
    
    return 0;
}
