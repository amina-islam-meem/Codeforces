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

    int n;cin >> n;
    int a,b;
    if(n%2 == 0)
    {
        a = 4;
        b = n-a;
    }
    else
    {
        a =9;
        b = n-9;
    }
    cout << a << " " << b;
    return 0;
}
