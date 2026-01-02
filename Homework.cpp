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
        string a;cin >> a;
        int m;cin >> m;
        string b,c;
        cin >> b ;
        cin >> c;
        string v = "";
        string d = "";

        for(int i = 0 ; i < m ; i++)
        {
            if(c[i]== 'V')
                v+=b[i];
            else
                d+=b[i];
        }
        reverse(v.begin(),v.end());
        cout << v << a << d << nl;



    }
    return 0;
}
