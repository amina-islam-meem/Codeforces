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
    string s ; cin >> s;
    map<string, int> fre;
    for (int i = 0; i+1< s.size(); i++)
    {
        string sub = s.substr(i, 2);
        fre[sub]++;
    }
     string s1;
    int count = 0;
    for (auto val : fre)
        {
           if (val.second > count)
           {
               count = val.second;
               s1 = val.first;
           }

        }
    cout << s1 << nl;
    return 0;
}
