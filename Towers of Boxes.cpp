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
        int n,m,d; cin >> n >> m >> d;

        int p = d/m + 1;
        int count =0;
        for(int i = 1; i <= n ;i+=p)
        {
            count++;
        }
        cout << count << nl;
    }
    return 0;
}
