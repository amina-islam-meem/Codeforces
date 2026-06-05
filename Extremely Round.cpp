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
        string s; cin >> s;
        int x = s.length();
        if(x == 1)
        {
            cout <<s[0]<<nl;
        }
        else if(x == 2)
        {
            cout << 9+(s[0]-'0')<< nl;
        }
        else if(x == 3)
        {
            cout << (9*2)+(s[0]-'0')<< nl;
        }
        else if(x == 4)
            cout << (9*3)+(s[0]-'0')<< nl;
        else if(x== 5)
            cout << (9*4)+(s[0]-'0')<< nl;
        else if(x == 6)
            cout << (9*5)+(s[0]-'0')<< nl;



    }
    return 0;
}
