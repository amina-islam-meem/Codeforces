/*#include<iostream>
using namespace std;
int main()
{
    long long int t;cin>>t;
    int flag = 0;
    while(t--)
   {
    long long int n;cin>>n;
    if(n%2!=0)
        cout<<"Yes"<<endl;
    else{
    for(int i=3;i*i<n;i+=2)
    {
        if(n%i==0){
            flag = 1;
            break;}
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;}
   }
   return 0;
}
if(n & (n - 1)) cout << "YES" << endl;
else cout << "NO" << endl;*/
#include<iostream>
using namespace std;
int main()
{
    long long int t;cin>>t;
    while(t--)
   {
    long long int n;cin>>n;
    if((n & (n - 1))==0)
        cout << "NO" << endl;
   else
    cout << "YES" << endl;
   }
 return 0;
}
