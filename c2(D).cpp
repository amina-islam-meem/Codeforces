#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--) {
        long long int L, R,l,r;
        cin >> L >> R;
        long long int min_val = min(L,R);
        long long int max_val = max (L,R);
        l = ((min_val-1) * min_val)/2;
        r = (max_val * (max_val+1))/2;
        cout << r-l << endl;
    }

    return 0;
}

/*#include <iostream>
using namespace std;

void reverseSubarray(int a[], int start, int end) {
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            reverseSubarray(a, 0, i - 1);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
/*#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;
        long long n = R - L + 1;
        long long sum =  (n * (L + R)) / 2;
        cout << sum << endl;
    }

    return 0;
}*/

