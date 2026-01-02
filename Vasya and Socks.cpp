#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n , m ;
    cin >> n >> m;
    int count = 0;
    while(n > 0)
    {
        count++;
        n--;
        if(count % m == 0)
        {
            n++;
        }
    }

    cout << count << endl;
    return 0;
}
