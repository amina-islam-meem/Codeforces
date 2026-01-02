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

    int n ; cin >> n;
    if(n %2 == 1) cout << -1 << nl;
    else
    {
        for(int i = n ; i >0 ; i--)
            cout << i << " ";
    }
    cout << nl;
    return 0;
}
