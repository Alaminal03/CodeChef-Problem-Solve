#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0,count=0;

    for (int i = 0; i < a;i++)
    {
        sum = sum + b;

        if(sum == c)
        {
            count++;
            break;
        }
        
    }
    if(count != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

        return 0;
}