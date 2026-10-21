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
        sort(v.begin(),v.end());

        int sum = 0;

        for (int i = n - m; i < n;i++)
        {
            sum += v[i];
        }

        cout << sum << endl;
    }

    return 0;
}
