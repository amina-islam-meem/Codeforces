/*#include<bits/stdc++.h>
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
        string s; cin >> s;
        string s1 = "";
        for(int i = 0 ; i < s.size();i++)
        {
            if(s1[0] == 'B' || s1[0] == 'b')
               s1.erase();
            if(s[i]== 'b'&& i > 0)
            {
                if( !s1.empty() && islower(s1.back()))
                    s1.pop_back();
            }
            else if(s[i] == 'B' && i >0 )
            {
                if( !s1.empty()  && isupper(s1.back()) )
                    s1.pop_back();
            }
            else
               s1 += s[i];

        }
        cout << s1 << nl;


    }
    return 0;
}*/


/*#include<bits/stdc++.h>
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
     string ans = "";
     vector<char>u;
    vector<char>l;
     for(char val : s)
     {
         if(isupper(val))
                u.push_back(val);
         else if(islower(val))
                    l.push_back(val);
         if(val == 'b')
            {
                ans.pop_back(l.back());
            }
             else if(val == 'B')
            {

                for(int i = ans.size() - 1; i >= 0; i--)
                {
                    if(isupper(ans[i]))
                    {
                        ans.pop_back();
                        break;
                    }

                }
            }
         else
            ans.push_back(val);
     }
    cout << ans << nl;


    }
    return 0;
}*/

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
     string ans = "";
     vector<int>u;
    vector<int>l;
    vector<bool> check(s.size(), false);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B')
            {
            if (!u.empty())
            {
                check[u.back()] = true;
                 u.pop_back();
            }

            }
        else if (s[i] == 'b')
            {
            if (!l.empty())
                {
                check[l.back()] = true;
                 l.pop_back();
               }

             }
        else if (isupper(s[i]))

            u.push_back(i);
        else

            l.push_back(i);
    }

    for(int i = 0 ; i < s.size();i++)
    {
        if(!check[i] && s[i] != 'B' && s[i] != 'b')
                ans += s[i];
    }
      cout << ans << nl;
    }
    return 0;
}
