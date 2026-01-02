#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>=10 && N<=99)
    {
        int m=N/10;
        int n=N%10;
        if((n!=0 && m%n==0)|| (m!=0 && n%m==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

