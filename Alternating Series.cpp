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
        if(n == 2)
            {
            cout << "-1 2" <<endl;
            continue;
            }
        for(int i = 1 ; i < n ; i++)
        {
                if(i%2 == 0)
                cout << 3 << " ";
                else
                cout << -1 << " ";
        }
        if(n %2 == 0)
              cout << 2 ;
        else
            cout << -1;


        cout <<nl;
    }
    return 0;
}



