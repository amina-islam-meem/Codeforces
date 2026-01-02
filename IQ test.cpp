#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
     int arr[n];
     int count = 0;
     int count1 = 0;
     for(int i = 1; i<=n ; i++)
     {
         cin>>arr[i];
     }
     for(int i = 1; i<=n ; i++)
     {
         if(arr[i]%2 != 0)
            count++;

         else
            count1++;
     }
     for(int i = 1; i<=n ; i++)
     {
         if(arr[i]%2 != 0 && count == 1)
            cout<<i;
         else if(arr[i]%2==0 && count1 ==1)
            cout<<i;
     }

    return 0;
}
