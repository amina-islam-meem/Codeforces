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
        map<int,int>fre;
        for(int i = 0 ; i < n; i++)
        {
            cin >> v[i];
            fre[v[i]]++;
        }
        int mx = 0;
        for(auto val : fre)
        {
            mx = max(mx,val.second);
        }
        if( n% 2 == 0 && mx <= (n/2))
        {

                cout << 0 << nl;
           // else
              //  cout << 1 << nl;
        }
        else if( n% 2 != 0 && mx <= (n/2))
        {
            cout << 1<< nl;
        }
        else
            cout << 2*mx - n << nl;

    }
    return 0;
}
