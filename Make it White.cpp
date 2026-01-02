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
        string S; cin >> S;
        int L,R;
        for(int i = 0 ; i < N ; i++)
        {
            if(S[i]=='B')
                {
                 L = i;
                 break;
               }
        }
        for(int i = N-1 ; i >= 0 ; i--)
        {
            if(S[i]=='B')
            {
               R = i;
               break;
            }
        }
        cout<<(R-L)+1<<endl;
    }
    return 0;
}
