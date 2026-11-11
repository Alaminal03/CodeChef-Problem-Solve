
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int count = 0, ans = 0;
        char pre =' ';

        for (int i = 0; i < n;i++)
        {
            if(count>0&&s[i]==pre)
            {
                count++;
            }
            else
            {
                count = 1;
            }

            pre = s[i];
            if(count==3)
            {
                ans++;
                count = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}