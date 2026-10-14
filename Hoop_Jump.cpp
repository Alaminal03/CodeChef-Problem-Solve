#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;

        if(a==1)
        {
            cout << 1 << endl;
        }
        else if(a%2==1)
        {
            cout << (a / 3) + 1 << endl;
        }
    }

    return 0;
}