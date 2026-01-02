#include<bits/stdc++.h>
using namespace std;

int maxi(int arr[],int N,int i)
{
    if(i==N)
    {
        return arr[0];
    }
   int max_value = maxi(arr,N,i+1);

   int m = max(arr[i],max_value);
   return m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N; cin >> N;
    int arr[N];
    for(int i = 0; i<N ; i++)
    {
        cin>>arr[i];
    }
    cout<<maxi(arr,N,0)<<endl;

    return 0;
}
