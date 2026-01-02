 #include<iostream>
 using namespace std;
 int main()
 {
     int t;cin>>t;
     while(t--)
     {
          int a,b,c;
          cin>>a>>b>>c;
          int p= a+b;
          if(p==c)
            cout<<"+"<<endl;
          else
            cout<<"-"<<endl;
     }
     return 0;
 }
