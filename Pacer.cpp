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
        int n,m; cin >> n >> m;
        int time = 0;
        int p = 0;
        int side = 0;
        int a ,b;
        while(n--)
        {
            cin >> a >> b;
            int curr = a - time;
            if(side != b)
            {
                p += (1+((curr-1)/2)*2);
            }
            else
            {
                p+=(curr/2)*2;
            }
            time = a ;
            side = b;

        }
        p += (m - time);
        cout << p << endl;
    }
    return 0;
}
