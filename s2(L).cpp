#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A ,B,m;
    cin>>A>>B;
    int gcd = 1;
    m = min(A,B);
    for (int i = 1; i <= m; i++) {
        if (A % i == 0 && B % i == 0) {
            gcd = i;
        }
    }
    cout<< gcd << endl;
    return 0;
}
