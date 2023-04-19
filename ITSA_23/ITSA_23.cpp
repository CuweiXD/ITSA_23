#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
using namespace std;

int main() {

    int N, a1, a2, a3, total = 0, ans1 = 0, ans2 = 0, ans3 = 0;
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);

    if (a1 * 15 + a2 * 20 + a3 * 30 <= N) {

        total = a1 * 15 + a2 * 20 + a3 * 30;

        ans3 = (N - total) / 50;
        ans2 = ((N - total) - (ans3 * 50)) / 5;
        ans1 = ((N - total) - (ans3 * 50) - (ans2 * 5)) / 1;

        cout << ans1 << "," << ans2 << "," << ans3 << endl;
    }
    else if (a1 * 15 + a2 * 20 + a3 * 30 > N) {

        cout << 0 << endl;
    }

    return 0;
}

