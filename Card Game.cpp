#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        string s; cin >> s;

        if(n <=2)
        {
            if(s[0]=='A')
              cout << "Alice" << nl;
            else
            cout << "Bob" << nl;
            continue;
        }

        if(s[n-1] == s[0])
        {
            if(s[0]== 'A')
               cout << "Alice" << nl;
            else
               cout << "Bob" << nl;
        }
        else
        {
            if(s[n-1]=='B')
            {
                bool check= false;
                for(int i = 0 ; i < n-1 ; i++)
                {
                    if(s[i]=='B')
                        check = true;
                }

                if(!check)
                   cout << "Alice" << nl;
                else
                    cout << "Bob" << nl;
            }

            else if(s[n-1]==s[n-2]  && s[n-1] == 'A')
                cout << "Alice" << nl;
            else
                cout << "Bob" << nl;
        }


    }
    return 0;
}
