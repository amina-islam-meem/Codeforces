#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;



       for (int i = 0 ; i < 2*n ; i++)
       {
           for(int j=0 ; j < 2*n; j++)
           {
               if(((i/2)+(j/2))%2 == 0)
                cout << "#";
               else
                cout << ".";
           }
           cout << nl;
       }


    }
    return 0;
}
