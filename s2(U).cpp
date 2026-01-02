#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B; cin >> N >> A >> B;

    long long int sum = 0;
    for(int i = 1; i <= N; i++)
    {
        int j = i;
        int digit = 0;
        while(j != 0)
        {
            int rem = j % 10;
            digit += rem;
            j /= 10;
        }
        if(A <= digit && B >= digit)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}
