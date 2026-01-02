#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int x)
{
    if (x < 2) return false;
    if (x % 2 == 0) return (x == 2);
    for (long long i = 3; i * i <= x; i += 2)
        {
        if (x % i == 0)
         return false;
       }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n ; cin >> n;
    while(n--)
    {
        long long int num,sqr;
        cin >> num;
        sqr = sqrt(num);
        if(sqr*sqr == num && isPrime(sqr))
             cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }
    return 0;
}
