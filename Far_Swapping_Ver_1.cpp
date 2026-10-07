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

        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i=0; i < n;i++)
        {
            for (int j = i+1; j < n;j++)
            {
                if(a[j] < a[i] && (abs(a[i]-a[j]))>1)
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
        // if(a[0]>a[1])
        // {
        //     int temp = a[0];
        //     a[0] = a[1];
        //     a[1] = temp;
        // }
        for (int i = 0; i < n;i++)
        {
            cout << a[i] <<" ";
        }
        cout << endl;
    }

    return 0;
}