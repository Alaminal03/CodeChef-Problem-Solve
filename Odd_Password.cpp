#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s2;

    for (int i = 0; i < 5;i++)
    {
        if(i==0 || i==2||i==4)
        {
            s2.push_back(s[i]);
        }
    }

    cout << s2 << endl;

    return 0;
}