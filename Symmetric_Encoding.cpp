#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        char c[n];

        for (int i = 0; i < n;i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n;i++)
        {
            if(c[i]=='s')
            {
                c[i] = 'c';
            }
            else if(c[i]=='c')
            {
                c[i] = 's';
            }
            else if(c[i]=='e')
            {
                c[i] = 'o';
            }
            else if(c[i]=='o')
            {
                c[i] = 'e';
            }
            else if(c[i]=='r')
            {
                c[i] = 'd';
            }
            else if(c[i]=='d')
            {
                c[i] = 'r';
            }
            
        }
        for (int i = 0; i < n;i++)
        {
            cout << c[i];
        }
    }
    cout << endl;

    return 0;
}