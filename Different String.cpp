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
        string s ; cin >> s;
        bool check = true;
        for(int i = 0 ; i < s.size()-1; i++)
        {
            if(s[i] != s[i+1])
            {
                check = false;
                swap(s[i],s[i+1]);
                break;
            }

        }
        if(check == false)
        {
            yes
            cout << s << nl;
        }
        else
            no

    }
    return 0;
}
