#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int fre[100001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        fre[arr[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<fre[i]<<endl;
    }
    return 0;

}
