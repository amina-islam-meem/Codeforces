#include<bits/stdc++.h>
using namespace std;

long long sum_array(int arr[],int n,int i)
{
    if(i==n)
        return 0;
    long long sum_value =arr[i] + sum_array(arr,n,i+1);
    return sum_value;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<sum_array(arr,n,0) <<endl;
    return 0;
}
