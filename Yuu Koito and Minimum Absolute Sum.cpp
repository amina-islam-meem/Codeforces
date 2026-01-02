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

        for(int i = 0 ; i <n ; i++)cin >> v[i];

        if(v[0] == -1 || v[n-1] == -1 )
        cout << 0 << nl;
        else
        cout << abs(v[n-1]-v[0]) << nl;

        if(v[0]== -1 && v[n-1] == -1)
        {
            v[0] = v[n-1] = 0;
        }
        else if(v[0] == -1)
        {
            v[0] = v[n-1];

        }
        else if(v[n-1] == -1)
            {
                v[n-1] = v[0];

            }

        for(int i = 0 ; i < n ; i++)
        {
            if(v[i]== -1)
                v[i] = 0;
        }
        for(int val : v)
            cout << val << " ";

        cout << nl;

    }
    return 0;
}
