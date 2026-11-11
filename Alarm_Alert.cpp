#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, d;
        cin >> n >> m >> d;

        long long g = __gcd(n, m);
        long long best = LLONG_MAX;

        for (long long i = 1; i <= m / g;i++)
        {
            if((i*n)%m <= d)
            {
                best = min(best, i * n);
                break;
            }
        }
        for (long long int i = 1; i <= n / g;i++)
        {
            if((i*m)%n<=d)
            {
                best = min(best, i * m);
                break;
            }
        }

        cout << best << endl;
    }

    return 0;
}