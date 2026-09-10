#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,pos =0,neg=0;
        cin >> n;

        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            if(a[i]>=0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }

    }

    return 0;
}