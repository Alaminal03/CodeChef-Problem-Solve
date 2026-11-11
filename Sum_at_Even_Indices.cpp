#include<bits/stdc++.h>
using namespace std;

void Operation(int a[],int n,int k)
{
    long long sum = 0;
    for (int i = 0; i < n;i+=2)
    {
        if(a[i]>2*k)
        {
            sum = sum + a[i];
        }
    }
    if(sum ==0)
    {
        cout << 0 << endl;
    }
    else 
    {
        cout << sum << endl;
    }
}

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    Operation(a, n, k);

    return 0;
}