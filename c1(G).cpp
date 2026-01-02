/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, m, k;
	cin >> n >> m >> k;

	int count = 0;
	if(n > 0 && m > 0 && k > 0)
	{
		int a = min({n,m,k});
		n -= a; m -= a; k -= a;
		count += a;
	}

	if(n > 1 && m == 0 && k > 0)
	{
		int a = n/2;
		if(a < k)
			count += a;
		else
			count += k;
	}

	cout << count << endl;

	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, k;
    cin >> n >> m >> k;

    long long int count = 0;

    long long int a = min({n, m, k});
    count += a;
    n -= a;
    m -= a;
    k -= a;

    a = min(n / 2, k);
    count += a;
    n -= 2 * a;
    k -= a;

    a = min({n / 2, m, k});
    count += a;

    cout << count << endl;
    return 0;
}
