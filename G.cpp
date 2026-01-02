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

    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<int> fre(26, 0);
    bool check = false;

    for(char c : s)
        {
             if(c >= 'a' && c <= 'z')
                 {
                    fre[c - 'a']++;
                 }
        }

        for (int i = 0; i < 26; i++)
        {
            if(fre[i]==0)
                {
                check = true;
                cout <<char('a' + i) <<nl;
                break;
                }
        }
        if(!check)
        cout <<"none" << nl;

    return 0;
}

