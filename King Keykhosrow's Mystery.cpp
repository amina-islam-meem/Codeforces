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
        int a,b;
        cin>>a >> b;
        int x = a, y = b;
        while (y != 0)
            {
            int temp = y;
            y = x % y;
            x = temp;
            }

        int gcd = x;
        int m = (a/gcd)*b;
       cout<<m<<endl;
    }
    return 0;
}
