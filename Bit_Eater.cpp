#include<bits/stdc++.h>
using namespace std;

void Operation(int a[],int n,int m)
{
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n;j++)
        {
            a[j] = a[j] / 2;
        }
    }

    for (int j = 0; j < n;j++)
    {
        cout << a[j]<<" ";
    }
}


int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;

    Operation(a, n, m);

    return 0;
}