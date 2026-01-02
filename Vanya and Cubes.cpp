/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int sum = 0;
    int count = 0;
    int h = 0;
    for ( int i = 1; i <= n ; i++)
    {
        sum +=i;
        count +=sum;
        if(count > n)
            break;
            h = i;

    }
    cout << h << endl;
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;

    int sum = 0;
    int h = 0;

    for (int i = 1; ; i++)
        {
        int cube = i * (i+1)/ 2;
        sum += cube;

        if (sum > n)
            break;

        h++;
    }

    cout << h << endl;
    return 0;
}

