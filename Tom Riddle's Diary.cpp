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
    vector<string>v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        bool check = false;
        for(int j = 0 ; j < n ; j++)
        {
            if(  v[i]== v[j] && j <i)
                {
                    check = true;
                    break;
                }

        }
        if(check)
            yes
        else
          no
    }

    return 0;
}
