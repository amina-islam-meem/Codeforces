#include<iostream>
using namespace std;
int main()
{
    int N,num=0;cin>>N;
    int R=N;
    while(N!=0)
    {
        int p=N%10;
        num=num*10+p;
        N=N/10;
    }
    cout<<num<<endl;
    if(R==num)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
