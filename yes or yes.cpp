#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        if(s== "YES"||s=="yES"||s=="YeS"||s=="yeS"||s=="YEs"||s=="yes"||s=="yEs"||s=="Yes")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
