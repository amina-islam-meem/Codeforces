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
        for (int i = 2; ; i++)
            {
            int m = pow(2,i) - 1;
            if (n % m == 0)
             {
                cout << n / m << nl;
                break;
            }
           }
    }
    return 0;
}
