/*#include<iostream>
using namespace std;
int main()
{
    int T, N;
    cin>>T;
    if(T==1 ||T==20)
    while (N--) {
        cin >> X;
        int mul=1;
    for(int i=1;i<=X;i++)
    {
        mul=mul*i;
    }
    cout<<mul<<endl;}

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    // Ensure T is within the given range
    if (T < 1 || T > 15) return 1;

    while (T--) {
        int N;
        cin >> N;

        // Ensure N is within the given range
        if (N < 0 || N > 20) return 1;

        cout << factorial(N) << endl;
    }

    return 0;
}*/
#include <iostream>
using namespace std;
int main()
 {
    int T;
    cin >> T;
    if (T < 1 || T > 15)
        return 1;

    while (T--)
        {
        int N;
        cin >> N;
        if (N < 0 || N > 20)
        return 1;
        long long mul = 1;
        for (int i = 2; i <= N; ++i) {
            mul = mul * i;
        }
        cout << mul << endl;
    }

    return 0;
}

