#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;
    int m = (a+b)*c;
    int n = (a*b)+c;
    int o = a+b+c;
    int p = a*b*c;
    int q = a+(b*c);
    int r = a*(b+c);
    cout<<max({m,n,o,p,q,r})<<endl;
    return 0;
}
