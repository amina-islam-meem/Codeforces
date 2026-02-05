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
        int n; cin >> n;
        vector<int>v;

        if(n%2 != 0)
            {
        for(int i = 2; i<= n ; i++)
            v.push_back(i);


            v.push_back(1);


            }
        else
        {
            int l = 1, r = n;
            while (l < r)
            {
                v.push_back(r);
                v.push_back(l + 1);
                v.push_back(l);
                v.push_back(r - 1);
                l += 2;
                r -= 2;
            }
        }


        for(int val : v)
            cout << val << " ";


        cout << nl;


    }
    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            p[i] = i;

        for (int i = 1; i + 1 <= n; i += 2)
            swap(p[i], p[i + 1]);

        for (int i = 1; i <= n; i++)
            cout << p[i] << " ";
        cout << '\n';
    }
    return 0;
}


