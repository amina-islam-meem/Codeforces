#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int a,b,c,d;
        cin>> a >> b >> c >> d;

        int m = c-a;
        int n = d-b;

        if(max(a,b) <= 2*(min(a,b)+1) && max(m,n) <= 2*(min(m,n)+1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
