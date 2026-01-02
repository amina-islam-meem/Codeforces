#include<bits/stdc++.h>
using namespace std;

long long power(int x, int n) {
    long long result = 1;
    for(int i = 0; i < n; i++)
        {
        result *= x;
    }
    return result;
}

void equ(int x,int n)
{
    long long sum = 0;
    for(int i = 0 ; i <= n ; i+=2)
    {
        if(i==0)
        {


                sum += (power(x,0)-1);

        }
        else
        {
           sum += power(x,i);
        }


    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x,n;
    cin >> x >> n;
    equ(x,n);

    return 0;
}
