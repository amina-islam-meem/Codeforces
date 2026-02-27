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

        for(int i = 0 ; i < n; i++)cin >> v[i];

        int count = 0;

        for(int i = 0 ; i < n-1; i++)
        {

            if(v[i]<=v[i+1])
                count++;
        }

        if(count == n-1)
            cout<< n << nl;
        else
            cout<< 1 << nl;



    }
    return 0;
}
