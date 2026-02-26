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

        int m = -1;
        for (int i = 0; i < n; i++)
            {
            if (v[i] == n)
             {
                m = i;
                break;
            }
        }

        if (m!= 0)
            swap(v[0], v[m]);



        for (int i = 0; i < n; i++)
            cout << v[i] << " ";


        cout << nl;


    }
    return 0;
}
