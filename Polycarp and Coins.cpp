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
        ll a,b;
        b = n /3;
        if (n%3 == 2)
            b++;
        a = n-(2*b);
        cout << a << " " << b<< nl;

    }
    return 0;
}
