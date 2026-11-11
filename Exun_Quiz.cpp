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

        int total = -1;
        for (int i = 0; i <= n;i++)
        {
            int temp = (4 * i) - m;
            if(temp<0||i+temp>n)
            {
                continue;
            }
            if(total==-1||i+temp<total)
            {
                total = i + temp;
            }
        }
        cout << total << endl;
    }

    return 0;
}