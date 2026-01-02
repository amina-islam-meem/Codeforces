#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int>a(n);
        map<int,int>mp;
        for(int i = 0;i< n ; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        if(mp.size() <= 2)
        {
            if(mp.size()==2)
            {
                vector<int>v;
                for(auto p : mp)
                {
                    v.push_back(p.second);
                }
                if(abs(v[0]-v[1])>1)
                    cout <<"NO"<<endl;
                else
                    cout << "YES"<<endl;

            }
            else
               cout << "YES"<<endl;
        }

        else
        cout << "NO"<<endl;
    }
    return 0;
}
