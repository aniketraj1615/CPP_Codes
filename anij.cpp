#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int c = n;
    while (c)
    {
        if (c % 7 == 0)
        {
            ans++;
        }
        int a = c % 10;
        if (a % 7 == 0)
        {
            ans++;
        }
        c = c / 10;
    }
    cout << ans << endl;

    return 0;
}