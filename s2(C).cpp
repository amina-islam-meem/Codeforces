#include<iostream>
using namespace std;
int main()
{
    int N;cin>>N;
    int n=0,p=0,e=0,o=0;
    for(int i=1;i<=N;i++)
    {
        int X;
        cin>>X;
        if(X<0)
        {
            n++;
        }
        else if(X>0)
        {
            p++;
        }
        if(X%2 ==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;
    return 0;
}
