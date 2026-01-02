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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        bool check = false;
        bool check1 = false;
        int m = max(a,b);
        int n = min(a,b);

        for(int i = n ; i <= m ;i++ )
        {
            if(i == c ||  i== d)
            {
                check = true;
                break;
            }
        }

        for(int i = m ; ;i++ )
        {
            if(i > 12)
             i = 1;

            if(i == c ||  i== d)
            {
                check1 = true;
                break;
            }
            if(i == n)
                break;
        }


        if(check && check1)
            yes
        else
           no


    }
    return 0;
}
