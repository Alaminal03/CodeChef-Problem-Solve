#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int r,mn;
        int sum = 0;
        if(a>0 && b>0 && c>0)
        {
            mn = min({a,b,c});
            sum = (mn * 10) + ((a - mn) * 3) + ((b - mn) * 3) + ((c - mn) * 3);
        }
        else 
        {
            sum = (a * 3) + (b * 3) + (c * 3);
        }

        cout << sum << endl;
    }

    return 0;
}