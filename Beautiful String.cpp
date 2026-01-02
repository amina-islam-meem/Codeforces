#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

bool pal(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n -1 -i])
            return false;
        }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        string s ; cin >> s;

        if(pal(s))
        {
            cout << 0 << nl;
            continue;
        }

        string r = "";
        vector<int>v;
       for(int i = 0 ; i < n ; i++)
       {
           if(s[i]== '0' )
           {
               v.push_back(i+1);
           }
           else
            r+=s[i];

       }
       if(pal(r))
        {
            cout << v.size() << nl;
            for(int i = 0 ; i < v.size();i++)
            {
                cout << v[i] << " ";
            }
            cout << nl;
            continue;
        }


         string r1 = "";
        vector<int>v1;
       for(int i = 0 ; i < n ; i++)
       {
           if(s[i]== '1' )
           {
               v1.push_back(i+1);
           }
           else
            r1+=s[i];

       }
       if(pal(r1))
        {
            cout << v1.size() << nl;
            for(int i = 0 ; i < v1.size();i++)
            {
                cout << v1[i] << " ";
            }
            cout << nl;
            continue;
        }

        cout << n << nl;
        for (int i = 1; i <= n; i++)
            cout << i << " ";

        cout << nl;
    }
    return 0;
}
