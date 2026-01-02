/*#include<bits/stdc++.h>
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
        pair< int,int>arr[51];

        for(int i = 0 ; i < N ; i++)
          {
        cin >> arr[i].first >> arr[i].second;
          }
        //sort(arr,arr+N);


         int maxA = INT_MAX;
         for (int i = 0; i < N; ++i)
            {
               if(max(arr[i].second,maxA) && arr[i].first <= 10)
                cout << i << endl;
           }

       }
    return 0;
}*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--)
        {
        int n; cin >> n;

        int a[51],b[51];

        int index = 0;
        int maxb = INT_MIN;

        for (int i = 1; i <= n; i++)
            {
                cin >> a[i] >> b[i];
            }

       for (int i = 1; i <= n; i++)
            {
            if (a[i] <= 10 && b[i] > maxb)
                {
                     maxb = b[i];
                    index = i;
                }
            }

        cout << index << endl;
    }

    return 0;
}

