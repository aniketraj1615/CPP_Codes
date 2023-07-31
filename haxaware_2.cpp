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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int fre[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                a++;
            }
        }
        fre[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        cout << (n - fre[i]) << " ";
    }
    cout << endl;

    return 0;
}