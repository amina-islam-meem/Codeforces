#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vi v(n+1);

        for(int i = 1; i <= n ; i++) cin >> v[i];

        bool check = false;

        for(int i = 1; i <= n ; i++)
        {
            if(v[1]!= v[i])
                check = true;
        }

        if(check)
        {
            yes


            for(int i = 2 ; i <= n ;i++)
            {
                if(v[1]!= v[i])

                    cout << 1 << " " << i<< nl;
            }

            int d = 0;

            for(int i = 2 ; i <= n ;i++)
            {
                if(v[1]!= v[i])
                {
                    d= i ;
                    break;
                }
            }


            for(int i = 2 ; i <= n ;i++)
            {
                if(v[i] == v[1])
                    cout << d << " " << i << nl;
            }


        }
        else
            no


    }
    return 0;
}
