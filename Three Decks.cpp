#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
    int a,b,c;
    cin >> a >> b >> c;
    int m = a+b+c;
    int n = m /3;
    if(m%3==0 && n >= a && n >= b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    return 0;
}
