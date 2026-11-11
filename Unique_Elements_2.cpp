#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    unordered_set<int> s;

    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        // s.insert(v[i]);
    }

    int sz = s.size();
    for (int i = 0; i < n;i++)
    {

        if(s.insert(v[i]).second)
        {
            cout << v[i] << " ";
        }
    }

        return 0;
}