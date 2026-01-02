#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int n,q;
    cin >> n >> q;
    vector<int>arr(n+1);
    for(int i =1 ;i <= n;i++)
    {
        cin >> arr[i];
    }
    vector <long long int> c(n+1);
    c[1] = arr[1];
    for(int i = 2; i<=n;i++)
    {
        c[i] = c[i-1] + arr[i];
    }


    while(q--)
    {
        int l,r;
        cin >> l >> r;
        if(l== 1)
        {
            cout << c[r] << endl;
        }
        else
        {
            cout << c[r]-c[l-1] << endl;
        }
    }
    return 0;
}
