#include<iostream>
using namespace std;
int main()
{
    int T;
    long long x;
    cin>>T;
    for(int i=1;i<= T; i++)
    {
        cin>>x;
        if(x==0){
            cout<<"0";
            }
        else{
         while (x != 0) {
        int digit = x % 10;
        cout<<digit<<" ";
        x= x / 10;
    }
        }
    cout << endl;
    }
    return 0;
}
