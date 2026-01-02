#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b;
    cin>>a>>b;
    int c = min(a,b);
    if(c==a)
        cout<<c<<" "<<(b-a)/2<<endl;
    else
        cout<<c<<" "<<(a-b)/2<<endl;

    return 0;
}
