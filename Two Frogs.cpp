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
        int n , a , b;
        cin >> n >> a >> b;
        int m = abs(a-b);
        if (m % 2 == 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}
