#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int p,m;cin>>p>>m;
    int count = 0;
    int d = 240-m;
    int sum = 0;
    for(int i = 1; i<= p; i++)
    {
        sum +=(i*5);
        if(sum <= d)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

