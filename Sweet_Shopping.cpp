#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        int l = 0;
        int sum = 0, ans = 0;

        for (int r = 0; r < n;r++)
        {
            sum += v[r];
            while(sum>m)
            {
                sum -= v[l];
                l++;
            }

            ans =max(ans,(r - l + 1));
        }

        cout << ans << endl;
    }

    return 0;
}