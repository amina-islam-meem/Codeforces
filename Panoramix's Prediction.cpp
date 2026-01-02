#include<bits/stdc++.h>
using namespace std;


bool prime (int n)
{
    if(n==0)return false;
    if(n==1)return false;
    if(n == 2 || n == 3)return true;
    if(n%2==0 || n%3==0)return false;

    for(int i = 5; i*i <= n; i+=6)
    {
        if(n%i == 0 || n%(i+2)== 0)return false;
    }
    return true;
}

int nextprime(int n)
 {
    int np= n + 1;
    while (!prime(np))
        {
          np++;
        }
    return np;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n ,m; cin >> n >> m;
    if(nextprime(n)== m)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
