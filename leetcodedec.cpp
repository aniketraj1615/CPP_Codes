#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{
    int arr[6] = {5, 0, 1, 2, 3, 4};
    int ans[6];
    for (int i = 0; i < 6; i++)
    {
        ans[i] = arr[arr[i]];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}