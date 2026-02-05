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

    string st; cin >> st;
     int b,s,c;
     cin >> b >> s >> c;
     ll m,n,o;
     cin >> m >> n >> o;

     ll p; cin >> p;

     int B=0,S=0,C=0;
     for(char val : st)
     {
        if (val == 'B') B++;
        else if (val == 'S') S++;
        else if (val == 'C') C++;
     }


         ll l = 0;
         ll r = 1e13;
         long long an= 0;

          while (l<= r)
            {
               ll mid = (l+r)/2;

        long long cost = 0;
        cost += max(0LL, mid * B - b) * m;
        cost += max(0LL, mid * S - s) * n;
        cost += max(0LL, mid * C - c) * o;

        if (cost <= p)
            {
            an= mid;
            l= mid + 1;
            }
        else
            r = mid - 1;
        }
        cout << an << nl;

    return 0;
}
