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
        int r = sqrt(N);
        if(r*r == N )
         {
             cout<<0<<" "<<r<<endl;
         }
         else
            cout<<-1<<endl;

    }
    return 0;
}
