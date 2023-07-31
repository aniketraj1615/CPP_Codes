#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{
    string x, y;
    cin >> x >> y;
    int n = x.size();

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += ((x[i] - 'a') - (y[i] - 'a'));
    }
    cout << ans << endl;

    return 0;
}