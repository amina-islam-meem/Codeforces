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
        int n; cin >> n;


       vi fre(26, 0);
         int sum = 0;

      for(char ch: s)
      {
          fre[ch - 'a']++;
          sum += ch - 'a' + 1;

      }


        if(sum <= n)
        {
             cout << s  << nl;
             continue;
        }


        for(int i = 25; i >= 0 && sum > n; i--)
        {
            while(fre[i] > 0 && sum > n)
            {
                sum -= (i+1);
                fre[i]--;
            }
        }

        for(char ch : s)
        {
            if(fre[ch-'a'] > 0)
            {
                cout << ch;
                fre[ch-'a']--;
            }
        }

        cout << nl;


    }
    return 0;
}
