#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int ans = 0, i = 0;

        while(i<n)
        {
            if(s[i]=='1')
            {
                ans++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}