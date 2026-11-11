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
        vector<int> v(n+1);

        for (int i = 1; i <= n;i++)
        {
            cin >> v[i];
            
        }
        int odd = 0, left = 0, right = 0;

        for (int i = 1; i <= n;i++)
        {
            if(v[i]%2==1)
            {
                odd++;
                if(left ==0)
                {
                    left = i;
                }
                right = i;
            }
        }

        if(odd%2==0)
        {
            cout << n << endl;
        }
        else
        {
            cout << max(n - left, right - 1) << endl;
        }
    }

    return 0;
}