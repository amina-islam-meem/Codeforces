#include<bits/stdc++.h>
using namespace std;

int fact(int N)
{
    if(N <= 1)
    {
        return 1;
    }
     int f= N * fact(N-1);
     return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;cin>>N;
    cout<<fact(N);
    return 0;
}
