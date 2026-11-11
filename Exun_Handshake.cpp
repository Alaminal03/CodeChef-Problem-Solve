#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long m;
        cin >> n >> m;
        vector<int> v(n);

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        
        sort(v.begin(), v.end());
        int l = 0, count = 0;
        for (int i = 0; i < n;i++)
        {
            l += v[i];
            int ans = (l*(l - 1) / 2);
            if(ans<=m)
            {
                count++;
            }
            else
                break;
        }

        cout << count << endl;
    }

    return 0;
}