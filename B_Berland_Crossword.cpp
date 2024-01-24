#include <iostream>
#include <algorithm>

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int n, U, R, D, L;
        std::cin >> n >> U >> R >> D >> L;

        for (int mask = 0; mask < 16; ++mask) {
            int rU = U, rR = R, rD = D, rL = L;

            if (mask & 1) {
                rU -= 1;
                rL -= 1;
            }
            if (mask & 2) {
                rL -= 1;
                rD -= 1;
            }
            if (mask & 4) {
                rD -= 1;
                rR -= 1;
            }
            if (mask & 8) {
                rR -= 1;
                rU -= 1;
            }

            if (std::min({rU, rR, rD, rL}) >= 0 && std::max({rU, rR, rD, rL}) <= n - 2) {
                std::cout << "YES" << std::endl;
                break;
            }
            else if (mask == 15) {
                std::cout << "NO" << std::endl;
            }
        }
    }

    return 0;
}
