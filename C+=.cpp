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
        int n,a,b; cin >> a >> b >> n;

        int count = 0;

        while(a <= n && b <= n)
            {
            if (a < b)
                 a += b;
            else
                b += a;
              count++;
        }
          cout << count << nl;

    }
    return 0;
}
