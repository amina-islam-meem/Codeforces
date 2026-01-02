#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


     int N; cin >> N;

     vector <int> v(N);
     for(int i = 0 ; i < N ; i++)
     {
         cin >> v[i];
     }

     for(int i = 0 ; i < N ; i++)
     {
         if(v[i]>0)
         {
            cout << 1 << " ";
         }
         else if(v[i]== 0)
            cout << 0 << " ";
         else
         {

            cout << 2 << " ";
         }
     }


    return 0;
}
