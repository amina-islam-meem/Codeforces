/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
         cin >> v[i];

    set<ll> ms;

    for (ll val: v)
    {
        auto it = ms.lower_bound(val);
        if (it != ms.end())
         {
            ms.erase(it);
        }
        ms.insert(val);
    }

    cout << ms.size() << nl;
    }
    return 0;
}


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
        int n; cin >> n;
        vector<ll> v(n);
    for (int i = 0; i < n; i++)
         cin >> v[i];
    sort(v.begin(), v.end());

        vector<set<int>>s;

        for (int val : v)
            {
            bool check = false;
            for (auto m : s)
             {
                if (m.find(val - 1)!= m.end())
                 {
                    m.insert(val);
                    check = true;
                    break;
                }
            }
            if (!check)
                s.push_back({val});

        }

     cout << s.size() << nl;

    }
    return 0;
}


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
        int n; cin >> n;
        vector<int>v(n);
        map<int,int>fre;
        for(int i = 0 ; i < n; i++)
        {
            cin >> v[i];
            fre[v[i]]++;
        }

        int count = 0;
        int pre = -1;
        int pre_cnt = 0;

        for (auto &[val, c] : fre)
            {
            if (val == pre + 1)
                c += pre_cnt;

            count = max(count, c);
            pre = val;
            pre_cnt = c;
        }

        cout << count << nl;


    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> fre;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            fre[v[i]]++;
        }

        vector<int> m;
        for (auto val : fre)
            m.push_back(val.first);

        int count = 0;
        int prev = -1;
        int pre_cnt = 0;

        for (int val : m)
            {
        if ( val != prev+1)
            pre_cnt = 0;

        int need = fre[val] -pre_cnt;
        if (need > 0)
            count += need;

        pre_cnt = fre[val];
        prev = val;
        }

        cout << count << nl;
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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i< n ;i++)cin >> v[i];
            sort(v.begin(),v.end());
        multiset<int>m;

        for(int val : v)
        {
            auto it = m.find(val-1);
            if(it != m.end())
                m.erase(it);

            m.insert(val);
        }

        cout << m.size() << nl;

    }
    return 0;
}

