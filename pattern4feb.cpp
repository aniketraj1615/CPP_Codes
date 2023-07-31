#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;

void fun(int n)
{
    if (n >= 1)
    {
        cout << n << " ";
        fun(n - 1);
        cout << n << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    fun(n);

    return 0;
}