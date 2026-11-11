#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, d;
        cin >> n>> d;

        vector<int> v(n),a(n);

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        int s1 = d, s2 = d, s3 = 2 * d;

        for (int i = 0; i < n;i++)
        {
            s1 += v[i];
            s2 += a[i];
            s3 += min(v[i], a[i]);
        }

        int ans = min(s1, s2);

        cout << min(ans,s3) << endl;
    }

    return 0;
}