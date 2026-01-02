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
        string s; cin >> s;
        int m = s.size();

        int i = m - 1;
        while (i >= 0 && s[i] == '0')
         {
           i--;
         }
         int count = 0;
         for (int j = 0; j < i; j++)
            {
              if (s[j] == '0')
                  count++;
            }

    if (i < 0)
        cout << 0 << nl;
    else
       cout << m-1-count <<nl;
    }
    return 0;
}
