#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);


    int div = (a[0] + a[n - 1]) / 2;
    for (int i = 0; i < n;i++)
    {
        if(a[i]==div)
        {
            cout << div << endl;
            break;
            
        }
        else if(a[i]<div && i+1 < n && a[i+1]>div)
        {
            int p1 = div - a[i];
            int p2 = a[i + 1] - div;

            if(p1<=p2)
            {
                cout << a[i] << endl;
            }
            else 
            {
                cout << a[i + 1] << endl;
            }
            break;
        }
        
    }

   
        return 0;
}