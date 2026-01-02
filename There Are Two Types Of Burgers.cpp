#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int b , p, f,a,d,result=0;
        cin >> b >> p >> f;
        int h , c;
        cin >> h >> c;

        int m = b/2;
       int n = min(p,f);
        if(m >=(p+f))
        {
            result = p*h + c*f;
        }
         else if(m>n)
            {
        if(h > c)
        {
            a = m - min(p, m);
            result = h * min(p, m) + c * min(f, a);
        }
        else
        {
            d = m - min(f, m);
           result = c * min(f, m) + h * min(p, d);
        }
        }
        else
            {
            if (h > c)
                result = min(p, m) * h;
            else
                result = min(f, m) * c;
        }
    cout << result << endl;

    }
    return 0;
}


