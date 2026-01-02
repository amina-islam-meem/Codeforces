#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


        int N; cin >> N;
        int arr[N];
        for(int i = 0; i < N ; i++)
        {
            cin>>arr[i];
        }

        int maxVal = arr[0];
        int sum = 0;
        for(int i = 0; i < N ; i++)
        {
           if (arr[i] > maxVal)
               maxVal = arr[i];
        }

        for(int i = 0; i < N ; i++)
        {
            if(arr[i]<maxVal)
            {
                sum += (maxVal-arr[i]);
            }
        }
        cout<<sum<<endl;
    return 0;
}
