# 題目23. 找零錢問題
### 問題描述：
假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。

### 輸入說明：
先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。

### 輸出說明：
列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。

### 範例：
#### 輸入範例:
500,1,2,3

#### 輸出範例:
0,1,7

### 解答
```
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
```
