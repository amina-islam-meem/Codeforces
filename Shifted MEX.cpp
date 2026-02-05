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

        for(int i = 0 ; i < n ; i++) cin >> v[i];

        sort(v.begin(),v.end());

        int mx = 0;

        for(int i = 0 ; i < n ; i++)
        {
            set<int>s;
            for(int j = 0 ; j < n ; j++)
            s.insert(v[j]-v[i]);




            int an = 0;
        while (s.count(an))
            {
             an++;
             mx = max(an,mx);
           }
        }







      /* vector<int> fre(3001, 0);

        for(int i = 0; i < n; i++)
            {
               if(m[i] <= n)
                 fre[m[i]]++;
            }

            for(int x: v)
            {
                cout << x << " ";
            }
            cout << nl;

        int count = 0;

        for(int i= 0 ; i < n ; i++)
        {
            if(v[i] <= count)
                count++;


        }

        cout << count << nl;*/



        cout << mx << nl;

    }
    return 0;
}



