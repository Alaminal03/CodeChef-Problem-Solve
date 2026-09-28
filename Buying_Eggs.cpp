#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int r1, r2;

    r1 = a * 12;
    r2 = (b * 12) + c;

    if(r1<r2)
    {
        cout << r1 << endl;
    }
    else 
    {
        cout << r2 << endl;
    }

    return 0;
}