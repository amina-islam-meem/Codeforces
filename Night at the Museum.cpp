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

    string s;cin >> s;
    int count = 0;
    int ch = 'a';
    for(char c : s)
    {
        int m = abs(c - ch);
        int n = 26-m;
        count += min(m,n);
        ch = c;
    }

    cout << count << nl;
    return 0;
}
