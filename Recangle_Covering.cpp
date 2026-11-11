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

        int maxRow = 0, minRow = n, maxCol = 0, minCol = m;

        for (int r = 0; r < n;r++)
        {
            string s;
            cin >> s;

            for (int c = 0; c < m;c++)
            {
                if(s[c]=='1')
                {
                    maxRow = max(maxRow, r);
                    minRow = min(minRow, r);
                    maxCol = max(maxCol, c);
                    minCol = min(minCol, c);
                }
            }
        }

        int ans = (maxRow - minRow +1) * (maxCol - minCol + 1);

        cout << ans << endl;
    }

    return 0;
}