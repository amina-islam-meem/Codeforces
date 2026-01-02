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

    int n,m; cin >> n >> m;
    vector<int>a(n+1);
    vector<int>count(n+1);
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
       set<int>s;
        for(int i = n; i >= 1;i--)
        {
            s.insert(a[i]);
            count[i]= s.size();
        }
    while(m--)
    {
        int x;cin >> x;

        cout << count[x] << nl;
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

    int n ; cin >> n;
    set<int>s;
    while(n--)
    {
        int a,b;cin>> a >>b;
        if(a==1)
        {
            s.insert(b);
        }
        else if(a == 2)
        {
            auto it = s.find(b);
            if(it != s.end())
                s.erase(b);
        }
        else
        {
            auto it = s.find(b);
            if(it != s.end())
                cout << "Yes" << nl;
            else
                cout << "No" << nl;
        }
    }
    return 0;
}
