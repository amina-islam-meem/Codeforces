#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
       int n,k,l,c,d,p,nl,np;
       cin>>n>>k>>l>>c>>d>>p>>nl>>np;

      int a = k*l;
      int y = a/nl;
      int b = c*d;
      int x = p/np;
    int z = min({y,b,x})/n;
    cout<< z <<endl;

    return 0;
}
