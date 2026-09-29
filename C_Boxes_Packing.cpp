#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }


    for (int i = 0; i < n;i++)
    {
        int cnt = 0;
        for (int j = 0; j < n;j++)
        {
            if( a[i]==a[j])
            {
                cnt++;
                
            }
        }
         count= max(cnt, count);
    }
    cout << count << endl;

    return 0;
}