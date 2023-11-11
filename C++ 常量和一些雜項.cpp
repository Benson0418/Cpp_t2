#include <bits/stdc++.h>
using namespace std;
#define PI 3.14
#define add(a,b) a+b
const int g = 100;

int main() {
    int a = 6, b = 3;
    std::swap(a, b);
    printf("%d %d %d %.2f", a, b, g, PI);
    cout<<'\n'<<2*add(a,b)*7<<endl; //注意輸出為 48

    return 0;
}
