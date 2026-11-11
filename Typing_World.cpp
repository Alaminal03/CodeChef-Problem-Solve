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

        string s, r;
        cin >> s >> r;

        int now = 1, result = 1;

        for (int i = 1; i < n;i++)
        {
            bool x = r.find(s[i - 1]) != string::npos;
            bool y = r.find(s[i]) != string::npos;

            if(x==y)
            {
                now++;
            }
            else
            {
                now = 1;
            }

            result = max(result, now);
        }

        cout << result << endl;
    }

    return 0;
}