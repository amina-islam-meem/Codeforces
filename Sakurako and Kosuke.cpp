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
        int x = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            int m = 2*i-1;
            if(i%2 != 0)
                x+=(-m);
            else
                x+=m;
        }
        if(x < 0)
            cout <<"Kosuke" << nl;
        else
            cout << "Sakurako" << nl;



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
        vector<int>v(n);

        for(int i = 0 ; i < n ; i++) cin >> v[i];

        int count = 0;

        for(int i = 0 ; i < n-1 ; i++)
        {
            if(v[i]>v[i+1])
                count++;
        }

        cout << count<< nl;



    }
    return 0;
}


