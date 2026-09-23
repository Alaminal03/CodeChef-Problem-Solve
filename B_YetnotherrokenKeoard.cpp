#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        vector<int> small;
        vector<int> big;

        vector<bool> deleted(s.size(), false);

        for (int i = 0; i < s.size();i++)
        {
            if(s[i]=='b')
            {
                if(!small.empty())
                {
                    int pos = small.back();
                    small.pop_back();
                    deleted[pos] = true;
                }
            }
            else if(s[i]=='B')
            {
                if(!big.empty())
                {
                    int pos = big.back();
                    big.pop_back();
                    deleted[pos] = true;
                }
            }
            else
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    small.push_back(i);
                }
                else
                {
                    big.push_back(i);
                }
            }
        }

        for (int i = 0; i < s.size();i++)
        {
            if(deleted[i]==false && s[i] !='b' && s[i] != 'B')
            {
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}