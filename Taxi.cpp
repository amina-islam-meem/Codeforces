#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     int n,m,p ; cin >> n;
     int count = 0;
     int cnt = 0;
     int ct = 0;
     int c = 0;
     vector<int>v(n);
     for(int i = 0 ; i < n ; i++)
     {
         cin >> v[i];
     }

     for(int i = 0 ; i < n ; i++)
     {
         if(v[i]==4)
         {
             count++;
         }
         else if(v[i] == 2)
         {
             cnt++;
         }
         else if (v[i] == 3)
            ct++;
         else
            c++;
     }

     if(cnt%2 == 0)
        m = cnt/2;
        else{
            m = (cnt/2) + 1;
            c = max(0, c - 2);
            }
    if(ct == c)
        p = c;
    else if( ct > c)
        p = ct;
    else
        p = ct + (((c-ct)+3)/4);

     cout << count+m + p << endl;


    return 0;
}


