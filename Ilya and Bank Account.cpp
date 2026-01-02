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
    if(n > 0)
        cout << n << nl;

    else
    {
        string s = to_string(n);
        int m = s.size();

            if(s[m-1]> s[m-2])
                s.erase( m-1,1);
            else
                s.erase(m-2,1);

        if(s == "-0")
            cout << 0 << nl;
        else
        cout << s << nl;
    }
    return 0;
}
