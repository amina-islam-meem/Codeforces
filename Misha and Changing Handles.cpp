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
   map<string,string >mp1,mp2;
   for(int i = 1 ; i <= n ; i++)
   {
       string x,y;
       cin >> x >> y;
       if(mp2.find(x)!= mp2.end())
       {
           string s = mp2[x];
           mp1[s] = y;
           mp2.erase(x);
           mp2[y]=s;
       }
       else
       {
       mp1[x]=y;
       mp2[y]=x;
       }
   }
   cout << mp1.size() << nl;
   for(auto [a,b] : mp1)
    cout << a << " " << b << nl;
    return 0;
}
