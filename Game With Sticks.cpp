#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m,n; cin >> m >> n;
    int count = 0;
    for(int i = 1 ; i <= m*n ; i++)
    {
        if( i>=m || i>= n )
            break;
        count++;
    }
    if(count%2==0)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;
    return 0;
}
