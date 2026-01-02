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
        int n,k; cin >> n >> k;
        int arr[n];

        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        int robgold = 0;
        int count = 0;
      for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]>=k)
                robgold += arr[i];
            else if (arr[i]== 0 && robgold > 0)
            {
                count++;
                robgold--;
            }
        }
        cout << count << endl;

    }
    return 0;
}
