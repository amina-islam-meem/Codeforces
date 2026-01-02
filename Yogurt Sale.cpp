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
        int n,a,b; cin >> n >> a >> b;
        int m = n*a;
        int p = (n/2)*b;
        if(n % 2 == 0)
        {
            cout << min(p,m) << endl;
        }
        else
        {
            int c = p + (n%2)*a;
            cout << min(c,m) << endl;
        }


    }
    return 0;
}
