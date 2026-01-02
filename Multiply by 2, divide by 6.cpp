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
        int N; cin >> N;
        int count = 0;
    while(N != 1)
        {
            if(N%6 == 0)
               {
                 count++;
                 N/=6;
               }
             else if(N%3 == 0)
               {
                 count++;
                 N = N*2;
               }
            else
                {
                 count = -1;
                 break;
                }
        }
            cout << count << endl;

    }
    return 0;
}
