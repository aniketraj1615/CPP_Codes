#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{
    int h, m, h1, m1, x;
    cin >> h >> m >> h1 >> m1 >> x;
    int a = (h + x) % 24;
    int b = ((h + x) / 24) * 60;
    int ani = (h - h1);
    int ku = (b + m - m1);
    if (a >= h1)
    {
        cout << ku << "->Number of minutes lagging" << endl;
    }

    else
    {
        cout << ku << "->Number of minutes ahead" << endl;
    }

    return 0;
}