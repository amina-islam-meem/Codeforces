#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

        int N; cin >> N;
       int arr[N];
       int count = 0;
       for(int i = 0; i<N ; i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+N);
       for(int i = 0; i<N ; i++)
       {
           if(arr[i]!=arr[i+1])
            cout<<arr[i]<<" ";
       }


    return 0;
}
