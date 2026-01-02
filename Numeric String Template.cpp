#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0 ; i < n; i++)
        {
            cin >> v[i];
        }
        int m ; cin >> m;
        while(m--)
        {
            string s; cin >> s;
            if(s.size() != n)
            {
                no
                continue;
            }
        else
            {
              map<int, char> mp1;
              map<char, int> mp2;
            bool check = true;

        for(int i = 0; i < n; i++)
            {
                int p = v[i];
                char c = s[i];

                if(mp1.find(p) != mp1.end() && mp1[p] != c)
                {
                    check = false;
                    break;
                }
                mp1[p] = c;

                if(mp2.find(c) != mp2.end() && mp2[c] != p)
                {
                    check = false;
                    break;
                }
                mp2[c] = p;
            }
            if(check)
                yes
                else
                no
        }

    }
    }
    return 0;
}
