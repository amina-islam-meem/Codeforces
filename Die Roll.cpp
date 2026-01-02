#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int y,w; cin >> y >> w;
    int p = (6 - max(y,w))+1;
    int q = 6;

   int a = p, b = q;
    while (b != 0)
        {
        int temp = b;
        b = a % b;
        a = temp;
      }

       p /= a;
       q /= a;

    cout << p << "/" << q << endl;

    return 0;
}
