#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

bool prime(int n)
{
    if(n == 1 )
        return false;
    if(n == 2)
        return true;
    if(n % 2 == 0)
        return false;
    for(int i = 3 ; i*i <= n ; i+= 2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;

    if(prime(n)) cout << 1 << nl;
    else if(n %2 == 0)  cout << 2 << nl;
    else
    {
        if(prime(n-2))
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }

    return 0;
}
