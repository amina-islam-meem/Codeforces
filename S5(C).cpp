#include<bits/stdc++.h>
using namespace std;

bool odd(int n)
{
    if(n%2 != 0)
        return true;
    else
        return false;
}

bool palindrom(int num) {
    if (num == 0)
        return true;

    string binary = "";
    while (num > 0)
        {
        binary = to_string(num % 2) + binary;
        num /= 2;
      }
   string s = binary;
   reverse(s.begin(),s.end());
   if(s==binary)
   {
       return true;
   }
   else
   {
       return false;
   }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin >> n;

   if(odd(n)==true && palindrom(n)==true)
    cout << "YES" << endl;
   else
    cout << "NO" << endl;

    return 0;
}
