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

    int n; cin >> n;

    if(n%2 == 0){
        cout<<n/2 << nl;
        for(int i=1; i<=n/2;i++)
            cout<<2 <<" ";
    }
    else
    {
        int p = (n-3)/2;
        cout << p+1 <<nl;
        cout << 3 <<" ";
        for(int i=1; i<=n/2-1;i++)
            cout<<2 <<" ";

    }


    return 0;
}
