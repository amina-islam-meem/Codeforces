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
        int h,m;
        cin >> h >> m;
        int a = (23 - h)*60;
        int b = 60-m;
        cout << a+b << endl;
    }
    return 0;
}
