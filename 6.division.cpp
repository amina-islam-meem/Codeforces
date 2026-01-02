#include<iostream>
using namespace std;
int main()
{
     int n;cin>>n;
     while(n--)
     {
         int p;cin>>p;
         if(p<=1399)
            cout<<"Division 4"<<endl;
            else if(p >=1900)
            cout<<"Division 1"<<endl;
         else if(p>=1400  && p <=1599)
            cout<<"Division 3"<<endl;
         else if(p>=1600 && p<=1899)
            cout<<"Division 2"<<endl;
     }
     return 0;
}
