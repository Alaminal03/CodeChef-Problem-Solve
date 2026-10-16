#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int x[a];

        for (int i = 0; i < a;i++)
        {
            cin >> x[i];
        }

        int mx = INT_MIN;

        for (int l = 0; l <= b;l++)
        {
            int r = b - l;
            int sum = 0;

            for (int i = l; i < a - r;i++)
            {
                sum = sum + x[i];
            }
            mx = max(mx, sum);
        }

        cout << mx << endl;
    }

    return 0;
}