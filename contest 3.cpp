/*#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        char W[11]; // Max length 10 + 1 for null terminator
        std::cin >> W;

        // Find the length manually
        int len = 0;
        while (W[len] != '\0') {
            len++;
        }

        // Replace 'us' with 'i'
        W[len - 2] = 'i';
        W[len - 1] = '\0'; // Null terminate

        // Print the result manually
        for (int i = 0; W[i] != '\0'; i++) {
            std::cout << W[i];
        }
        std::cout << "\n";
    }

    return 0;
}
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
        {
        string M;
        cin >> M;
        int p= M.length();
       int p-2='i';
       int p-1='\0';

        cout << M << endl;
    }

    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
        {
        string M;
        cin >> M;

        int p = M.length();
        M[p - 2] ='i';
        M.pop_back();
        cout << M << endl;
       }
    return 0;
}


