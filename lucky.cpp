#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string m;
        cin>>m;
        int sum = 0;
        int sum2 = 0;
        for(int i=0;i<3;i++)
            {
             sum = sum +m[i]-'0';
            }
        for(int i=3;i<6;i++)
        {
            sum2 = sum2 + m[i]-'0';
        }
        if(sum == sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
