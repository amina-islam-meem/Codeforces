#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k,r;
    cin >> k >> r ;
    for (int i = 1 ; i <= 10 ; i++)
    {
        int m = k*i;
        if(m%10== 0 || m%10 == r)
            {
            cout << i << endl;
            break;
           }
    }
    return 0;
}
