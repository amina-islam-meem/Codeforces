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
        long long N; cin >> N;
        if(N==1 || N==2)
            cout<<"0"<<endl;
        else if(N>2)
            cout<<(N-1)/2<<endl;
    }
    return 0;
}
