#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

        long long N; cin >> N;
       (N>0 && (N&(N-1))==0)? cout<<"YES":cout<<"NO";


    return 0;
}
