/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'


set<string>sub;

void subse(string s,int idx,int n,string curr)
{
    if(idx == n)
    {
        sub.insert(curr);
        return ;
    }
    if (curr.empty() || curr.back() != s[idx])
        subse(s, idx + 1, n, curr + s[idx]);


    subse(s, idx + 1, n, curr);


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;

        string s; cin >> s;
        subse(s,0,n,"");
        int mx = 0;

        for (auto val : sub)
            {
              if (!val.empty())
                  mx = max(mx,(int)val.size());
             }

        cout << mx << nl;

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

    int n;cin >> n;
    string s;cin >> s;
    int count = 0;

    for (int i = 0; i < n; i++)
        {
        if (i == 0 || s[i] != s[i - 1])
            count++;
         }

    cout << count << nl;
    return 0;
}


