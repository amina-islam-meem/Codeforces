#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
    	int N, a, b, c; cin >> N >> a >> b >> c;

        int total = a+b+c;
        int count = 0;

        if(N % total == 0)
        	cout << N/total * 3 << endl;
        else
        {
            int remain = N % total;

        	if(remain <= a)
                count = (N / total)*3 + 1;
        	else if (remain <= a+b)
        	    count = (N / total)*3 + 2;
            else
             count = (N / total)*3 + 3;

        	cout << count << endl;
        }
	}
    return 0;
}
