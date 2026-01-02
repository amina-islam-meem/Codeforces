#include<iostream>
using namespace std;
int main()
{
    long long N;cin>>N;
    int k;cin>>k;
    while(k--)
    {
        if(N>0&&N%10!=0)
        {
            N=N-1;
        }
        else if(N%10==0)
        {
            N=N/10;
        }
    }
    cout<<N<<endl;
    return 0;
}
