#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;
        int Arr[n];
        for(int i=0;i<n;i++)
        {
        cin>>Arr[i];
        }
        int p = Arr[k-1];
        for(int i=0;i<n;i++)
        {
            if(Arr[i] >= p && Arr[i]>0){
            count++;}
    }
    cout<<count<<endl;
    return 0;
}
