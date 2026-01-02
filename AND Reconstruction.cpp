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
        vector<ll>b(n-1);
        vector<ll>a(n);

        for(int i =0 ; i < n-1 ; i++) cin >> b[i];


         a[0] = b[0];
         a[n-1] = b [n-1-1];

        for(int i = 1; i < n-1; i++)
        {
            a[i] = (b[i]|b[i-1]);
        }

        bool check = true;
        for(int i = 0 ; i <n-1 ; i++)
        {
            if(b[i]!= (a[i] & a[i+1]))
            {
                //cout << -1 << nl;
                check = false;
                break;
            }
        }
        if(check)
        {
        for(int val : a)
            cout << val << " " ;
        }
        else
            cout << -1 ;


        cout << nl;


    }
    return 0;
}
