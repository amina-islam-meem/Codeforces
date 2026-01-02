/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;cin>>N;
    while(N--){
    int arr[100];
    for(int i=1;i<=N;i++)
    {
        cin>>arr[i];
        int length = sizeof(arr)/sizeof(arr[0]);
        if(arr[i]<10)
            cout<<arr[i];
        else
        {
            cout<<arr[0]<<length<<arr[N];
        }
    }
    }
    return 0;
}*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int N;cin>>N;
    while(N--)
    {
        string p;cin>>p;
        if(p.length()<=10)
            cout<<p<<endl;
        else
            cout<<p[0]<<p.length()-2<<p.back()<<endl;
    }
    return 0;
}
