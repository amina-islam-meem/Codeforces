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
        int p; cin >> p;

        ll count  = 1;

    for(ll i = 2; i * i <= p; i++)
       {
         if(p% i == 0)
         {
             count *= i;
            while(p % i == 0)
                  p /= i;
        }
    }


    if (p > 1)
        count *= p;

    cout << count << nl;


    }
    return 0;
}
