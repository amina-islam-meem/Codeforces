#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    for(int i = 1 ; i<= n ; i++)
    {
        if(i==n)
        {
            cout<<i;
            break;
        }
        cout<<i<<" ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    fun(n);

    return 0;
}
