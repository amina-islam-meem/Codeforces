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
        int arr[N];

     for(int i = 0 ; i < N ; i++)
     {
         cin >> arr[i];
     }
     sort(arr,arr+N);
     int flag = 1;
     for(int i = 0 ; i < N-1 ; i++)
     {
         if(arr[i]== arr[i+1])
         {
             flag = 0;
             break;
         }
     }
     if(flag == 1)
        cout << "YES" << endl;
     else
        cout << "NO" << endl;

    }
    return 0;
}
