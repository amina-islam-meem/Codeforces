#include<iostream>
using namespace std;
int main()
{
    int N;cin>>N;
    int Arr[N];
    bool flag=0;
    for(int i=0 ;i<N;i++)
    {
        cin>>Arr[i];
    }
    for(int i = 0, j = N - 1; i < j; i++, j--)
    {
        if(Arr[i] != Arr[j])
        {
            flag = 1;
            break;
        }
    }
       if (flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    return 0;
}

