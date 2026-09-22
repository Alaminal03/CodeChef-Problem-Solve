#include<bits/stdc++.h>
using namespace std;

void Addition(int aa,int bb,int cc)
{
    int sum = aa + bb;
    if(sum<cc)
    {
        cout <<"NO"<< endl;
    }
    else if(sum>=cc)
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Addition(a, b, c);

    return 0;
}