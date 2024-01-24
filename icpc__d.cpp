#include<iostream>
using namespace std;

string solve(int A, int B, int C, int K) {
    if ((A + B + C) % 3 != 0) {
        return "Fight";
    }
    if (K >= 3) {
        return "Peaceful";
    }
    if ((A + B + C) / 3 < K) {
        return "Fight";
    }
    A %= K;
    B %= K;
    C %= K;
    if ((A + B + C) % 3 == 0) {
        return "Peaceful";
    } else {
        return "Fight";
    }
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int A, B, C, K;
        cin >> A >> B >> C >> K;
        cout << "Case " << i << ": " << solve(A, B, C, K) << endl;
    }
    return 0;
}
