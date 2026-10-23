#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1,b1,a2,b2,a3,b3;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

        if(a1>b1)
        {
            swap(a1, b1);
        }
        if(a2>b2)
        {
            swap(a2,b2);
        }
        if(a3>b3)
        {
            swap(a3,b3);
        }

        if(a1==a2 && b1==b2)
        {
            cout << 1 << endl;
        }
        else if(a1==a3 && b1 == b3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}