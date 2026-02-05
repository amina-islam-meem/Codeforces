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
        int n,h,l; cin >> n >> h >> l;

        vector<int>v(n);

        for(int i = 0 ; i < n ; i++)cin >> v[i];

        int c1 = 0 ;
        int c2 = 0;
        int c3 = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(v[i]<=l && v[i]<= h)c1++;
            else if(v[i]<=l)c2++;
            else if(v[i]<= h)c3++;
        }


        int count = 0;
        for(int i = 0 ; i <= c1 ;i++)
        {
            int m = c3 + i;
            int p= c2+ (c1 - i);
            count = max(count, min(m, p));

        }


        cout << min(count,n/2) << nl;


    }
    return 0;
}


