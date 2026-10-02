#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int r;

    if(a*2<b)
    {
        r = b/a;
    }
    else
    {
        r = b-a;
    }

    cout << r <<endl ;

    return 0;
}