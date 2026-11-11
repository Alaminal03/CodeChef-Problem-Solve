#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a1 = 0,a2 =0, b1 =0, b2 = 0;

        char a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            if(a[i]=='a')
            {
                a1++;
            }
            else
            {
                b1++;
            }
        }
        char b[n];

        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
            if(b[i]=='a')
            {
                a2++;
            }
            else
            {
                b2++;
            }
        }

        if(a1==b2 || b1==a2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        
    }

    return 0;
}