#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = n - i;
        while (a--)
        {
            cout << " ";
        }
        int j=1;
        for ( j = 1; j <= i; j++)
        {
            cout << j;
        }
        j--;
        j--; 
        while(j>0){
        j--;    
cout << j;

        }
        cout<<endl;
    }

    return 0;
}