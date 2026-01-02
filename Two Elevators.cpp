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
        int a,b,c; cin >> a >> b >> c;
        int p = a-1;
        int q = abs(b-c)+ (c-1);

        if(p==q)
            cout << "3" << endl;
        else if(p > q)
            cout << "2" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}
