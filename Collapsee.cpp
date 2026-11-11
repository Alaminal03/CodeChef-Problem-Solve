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
        vector<long long> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        long long ans = a[n - 1] - a[n - 2];

        for (int i = 0; i < n - 2;i++)
        {
            ans = ans + llabs(a[i]);
        }

        cout << ans << endl;
    }
    return 0;
}