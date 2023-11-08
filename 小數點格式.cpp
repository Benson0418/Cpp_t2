#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1 = 42;
    double num2 = 3.14159;

    // 補前綴 0
    printf("%05d\n", num1);

    // 補空格
    printf("%5d\n", num1);

    // 控制小數位數
    printf("%.2f\n", num2);

    return 0;
}
