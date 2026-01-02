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
    long long x;
    cin >> x;
    long long y = 1;
    while (y <= x) y *= 10;
    cout << y - x << endl;

    }
    return 0;
}

