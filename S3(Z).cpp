#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,key;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    while(q--)
    {
        cin>>key;

    int s=0;
    int e=n-1;
    int result =-1;
    while(s<=e)
    {
        int mid = s + (e - s) / 2;

        if(arr[mid]==key)
        {
            result= mid;
            break;
        }
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
    }
    if(result == -1)
        cout<<"not found"<<endl;
    else
        cout<<"found"<<endl;
    }
    return 0;
}
