#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int extra = b - a;

    cout << min(a, extra) << endl;

    return 0;
}