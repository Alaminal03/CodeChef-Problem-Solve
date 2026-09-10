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
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int mx = INT_MIN;

       
            int count = 1;
            sort(a, a + n);
            for (int j = 0; j < n;j++)
            {
                if(a[j]==a[j+1])
                {
                    count++;
                }
                else
                {
                    count = 1;
                }

                 mx = max(count, mx);
            }
           
        

        int result = (mx+1)/2;
        cout << result << endl;
    }

    return 0;
}