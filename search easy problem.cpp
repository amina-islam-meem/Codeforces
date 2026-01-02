#include<iostream>
using namespace std;
int main()
{
    int n,m;cin>>n;
    int flag =0;
    while(n--)
    {
        cin>>m;
        if(m==1)
        {
            flag =1;
        }

    }
    if(flag==1)
        cout<<"Hard"<<endl;
    else
        cout<<"Easy"<<endl;
    return 0;
}
