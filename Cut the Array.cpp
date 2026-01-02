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
        int N; cin >> N;
            vector<int> a(N);
            vector<int> pre(N);
            int l= 0 ;
            int r = 0;
    for (int i = 0; i < N; i++)
        {
        cin >> a[i];
        }
    pre[0] = a[0];
    for (int i = 1; i < N; i++)
        {
        pre[i] = pre[i-1] + a[i];
       }
       bool check= false;

      for (int i = 0; i < N-2 ; i++)
      {
        for (int j = i+1; j < N-1; j++)
         {
            int s1 = pre[i] % 3;
            int s2 = (pre[j] - pre[i]) % 3;
            int s3 = (pre[N-1] - pre[j]) % 3;

            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3))
                {
                l = i+1;
                r = j + 1;
                check = true;
                break;
              }
        }
    }
    if(check)
        cout << l << " " << r << endl;
    else
        cout << "0 0" << endl;

    }
    return 0;
}
