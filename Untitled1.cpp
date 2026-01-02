/*#include <iostream>
#include <vector>
using namespace std;
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> A(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;
    X--; Y--;

    bool all_x = true;
    for (int i = 0; i < 8; i++) {
        int nx = X + dx[i];
        int ny = Y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (A[nx][ny] != 'x') {
                all_x = false;
                break;
            }
        }
    }

    cout << (all_x ? "yes" : "no") << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i += K) {
        int group_min = arr[i];
        for (int j = i + 1; j < i + K && j < N; ++j) {
            if (arr[j] < group_min) {
                group_min = arr[j];
            }
        }
        cout << group_min << " ";
    }

    delete[] arr;
    return 0;
}

