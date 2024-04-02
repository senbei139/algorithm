#include <iostream>
#include <vector>


using namespace std;


const long long INF = 1LL<<60;
int N, K;


int main() {
    cin >> N >> K;
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    // vector<int> s(N+1, 0);
    vector<int> s(N+1);
    for (int i = 0; i < N; i++) s[i+1] = s[i] + A[i];

    long long res = -INF;

    for (int i = 0; i <= N-K; i++) {
        long long val = s[K+i] - s[i];
        if (res < val) res = val;
    }

    cout << res << endl;

    return 0;
}
